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

void solve() {
    int n, m; 
    cin >> n >> m;

    int adjcount = 0;

    bool ok = true; 

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        if (a > b){
            ok = false; 
        }

        if (a + 1 == b){
            adjcount++; 
        }
    }

    int ans = n - adjcount - 1;

    if (ok) {
        cout << ans << endl; 
    } else {
        cout << -1 << endl; 
    }
}

int main() {
    fast_io();
    
    int t;
    cin >> t;

    while (t--){
        solve(); 
    }

    return 0;
}