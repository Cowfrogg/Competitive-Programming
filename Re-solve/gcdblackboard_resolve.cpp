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

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    vector<ll> pref(n);

    for (int i = 1; i < n; i++){
        pref[i] = gcd(pref[i - 1], a[i - 1]); 
    }

    vector<ll> suff(n); 

    for (int i = n - 2; i >= 0; i--){
        suff[i] = gcd(suff[i + 1], a[i + 1]);
    }

    ll ans = 0;

    for (int i = 0; i < n; i++){
        ans = max(ans, gcd(pref[i], suff[i])); 
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}