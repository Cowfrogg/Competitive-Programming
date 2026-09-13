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

const int MAXN = 1e5;

int n, m;
vector<int> cat(MAXN);
vector<vector<int>> graph(MAXN);

int ans = 0;

void dfs(int u, int parent, int count){
    if (cat[u] == 1){
        count++; 
    } else {
        count = 0; 
    }

    if (count > m){
        return; 
    }

    if (u != 0 && graph[u].size() == 1){
        ans++; 
    }

    for (int v : graph[u]){
        if (v == parent){
            continue; 
        }

        dfs(v, u, count);
    }
}

void solve(){
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> cat[i]; 
    }

    for (int i = 0; i < n - 1; i++){
        int u, v; 
        cin >> u >> v;
        u--, v--; 

        graph[u].push_back(v); 
        graph[v].push_back(u); 
    }

    dfs(0, -1, 0); 

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}