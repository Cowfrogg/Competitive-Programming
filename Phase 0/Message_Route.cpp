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
vector<int> parent; 

void solve(){
    cin >> n >> m;

    graph.resize(n);
    visited.assign(n, false);
    parent.assign(n, -1);

    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--;
        v--;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    queue<int> q;

    q.push(0);

    visited[0] = true;

    while (!q.empty()){
        int u = q.front();

        q.pop(); 

        for (int v : graph[u]){
            if (!visited[v]){
                parent[v] = u;
                visited[v] = true;
                q.push(v); 
            }
        }
    }

    if (!visited[n - 1]){
        cout << "IMPOSSIBLE" << endl;

        return; 
    }

    vector<int> path;

    for (int i = n - 1; i != -1; i = parent[i]){
        path.push_back(i);
    }

    reverse(path.begin(), path.end()); 

    cout << path.size() << endl;

    for (auto it : path){
        cout << it + 1<< " "; 
    }

    cout << endl;

}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}