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

bool valid(ll x, vector<pair<ll, ll>> balloons){
    ll n = balloons.size();

    vector<ll> d(n);

    for (ll i = 0; i < n; i++){
        auto [h, s] = balloons[i];

        if (x < h){
            return false; 
        }

        d[i] = floor((x - h) / s);
    }

    sort(d.begin(), d.end()); 

    for (ll i = 0; i < n; i++){
        if (d[i] < i) {
            return false;
        }
    }

    return true;
}

void solve(){
    ll n;
    cin >> n;

    vector<pair<ll, ll>> balloons(n);

    ll l = 0;
    ll r = 0;

    for (ll i = 0; i < n; i++){
        cin >> balloons[i].first >> balloons[i].second;

        r = max(r, balloons[i].first + balloons[i].second * (n - 1));
    }

    ll mid; 
    ll ans; 

    while (l <= r){
        ll mid = l + (r - l) / 2; 

        if (valid(mid, balloons)){
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1; 
        }
    }

    cout << l << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}