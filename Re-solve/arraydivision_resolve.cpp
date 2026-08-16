#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vll vector<ll>
#define pii pair<ll, ll>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define F first
#define S second
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const long long LINF = 4e18;

void fast_io(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

bool valid(ll x, ll k, vector<ll> a){
    ll n = a.size(); 

    ll sum = 0, count = 1; 

    for (ll i = 0; i < n; i++){
        if (a[i] > x){
            return false; 
        }

        sum += a[i]; 

        if (sum > x){
            sum = a[i]; 
            count++;
        }
    }

    return count <= k; 
}

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n); 

    ll l = 10e9 + 1;
    ll r = 0;

    for (ll i = 0; i < n; i++){
        cin >> a[i]; 

        r += a[i]; 
        l = min(l, a[i]); 
    }

    ll ans; 

    while (l <= r){
        ll mid = l + (r - l) / 2;

        if (valid(mid, k, a)){
            r = mid - 1; 
            ans = mid; 
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