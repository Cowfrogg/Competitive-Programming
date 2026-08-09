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

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

const int MOD = 1e9 + 7;

const ll INF = 1000000000000LL + 5;

void solve(){
    int x, y, k;
    cin >> x >> y >> k;

    ll l = 1, r = INF, ans = -1;

    while (l <= r){
        ll mid = l + (r - l) / 2;

        ll rem = mid - 1;
        for (int i = 0; i < x; i++){
            rem -= rem / y;
        }

        if (rem >= k){
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
    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}