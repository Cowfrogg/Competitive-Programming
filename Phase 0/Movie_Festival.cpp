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
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        p[i] = {a, b}; 
    }

    sort(p.begin(), p.end(), [](pair<int, int>& a, pair<int, int>& b){
        return a.second < b.second; 
    });

    int ans = 0;
    int lastEnd = 0;

    for (int i = 0; i < n; i++){
        auto [a, b] = p[i];

        if (a >= lastEnd){
            lastEnd = b;
            ans++; 
        }
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}