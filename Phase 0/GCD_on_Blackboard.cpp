#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second
const int MOD = 1e9 + 7;
const int INF = 1e9;
const long long LINF = 4e18;

void fast_io(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(n); 

    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<ll> pref(n + 1, 0);
    vector<ll> suff(n + 1, 0); 

    for (ll i = 0; i < n; i++){
        pref[i + 1] = gcd(pref[i], a[i]);
    }

    for (ll i = n - 1; i >= 0; i--){
        suff[i] = gcd(suff[i + 1], a[i]);
    }

    ll ans = 0;

    for (ll i = 0; i < n; i++){
        ll curr = gcd(pref[i], suff[i + 1]); 

        ans = max(ans, curr); 
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}