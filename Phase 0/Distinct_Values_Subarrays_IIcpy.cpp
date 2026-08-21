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
    ll n;
    cin >> n;

    vector<ll> a(n); 

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    unordered_set<ll> s;

    ll ans = 0;

    ll l = 0;

    for (int r = 0; r < n; r++){
        while (s.count(a[r])){
            s.erase(a[l]);

            l++; 
        }

        s.insert(a[r]);

        ans += r - l + 1;
    }

    cout << ans << endl;
}

int main() {
    fast_io();

    solve();
    
    return 0;
}