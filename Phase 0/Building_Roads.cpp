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

int n, m;
vector<vector<int>> graph;
vector<bool> visited; 

void bfs(int start){
    queue<int> q;

    q.push(start); 
    visited[start] = true; 

    while(!q.empty()){
        int u = q.front();

        q.pop();

        for (int v : graph[u]){
            if (!visited[v]){
                q.push(v);
                visited[v] = true; 
            }
        }
    }

}

void solve(){
    cin >> n >> m;

    graph.resize(n);
    visited.assign(n, false);

    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--; 
        v--;

        graph[u].push_back(v); 
        graph[v].push_back(u);
    }

    vector<int> ans;

    for (int i = 0; i < n; i++){
        if (!visited[i]){
            ans.push_back(i + 1);
            bfs(i); 
        }
    }

    cout << ans.size() - 1 << endl; 

    for (int i = 1; i < ans.size(); i++){
        cout << ans[0] << " " << ans[i] << endl; 
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}