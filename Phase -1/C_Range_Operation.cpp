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
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;

    ll mn = 0, bst = 0, s = 0;

    for (ll i = 1; i <= n; i++){
        ll x; 
        cin >> x; 

        s += x;

        ll cur = i * (i + 1) - s;

        mn = min(mn, cur);
        bst = max(bst, cur - mn);

    }

    cout << s + bst << endl; 
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