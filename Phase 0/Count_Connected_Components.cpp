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

const int MAXN = 101;

vector<int> visited(MAXN, false);
vector<vector<int>> graph(MAXN);

void dfs(int u){
    visited[u] = true; 

    for (int v : graph[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}

void solve(){
    int n, m; 
    cin >> n >> m; 

    for (int i = 0; i < m; i++){
        int u, v; 
        cin >> u >> v;

        u--, v--; 

        graph[u].push_back(v); 
        graph[v].push_back(u); 
    }

    int ans = 0;

    for (int i = 0; i < n; i++){
        if (!visited[i]){
            dfs(i);
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