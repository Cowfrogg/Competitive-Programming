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

bool valid(ll x, ll t, vector<ll> a){
    ll total = 0; 

    ll n = a.size(); 

    for (ll i = 0; i < n; i++){
        total += floor(x / a[i]); 
    }

    return total >= t;
}

void solve(){
    ll n, t;
    cin >> n >> t;

    vector<ll> a(n); 

    for (ll i = 0; i < n; i++){
        cin >> a[i]; 
    }

    ll l = 0, r = *min_element(a.begin(), a.end()) * t;
    ll mid, ans; 

    while (l <= r){
        mid = l + (r - l) / 2;

        if (valid(mid, t, a)){
            ans = mid; 
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}