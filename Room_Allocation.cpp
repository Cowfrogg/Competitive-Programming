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
    int n;
    cin >> n;

    vector<pair<int, int>> p(n); 

    for (int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }

    int count = 1;

    vector<int> ans(n);

    for (int i = 1; i < n; i++){
        if (p[i].first > p[i - 1].second){
            count++;
        }
    }

    cout << count << endl;
}

int main() {
    fast_io();
    
    solve();
    return 0;
}