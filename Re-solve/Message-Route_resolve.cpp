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
vector<vector<int>> adj;
vector<bool> visited;
vector<int> parent; 
queue<int> q;

void solve(){
    cin >> n >> m;
    adj.resize(n);
    parent.assign(n, -1);  
    visited.assign(n, false); 

    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--, v--; 

        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    q.push(0); 
    visited[0] = true;

    while (!q.empty()){
        int u = q.front();

        q.pop(); 

        for (int v : adj[u]){
            if (!visited[v]){
                q.push(v); 
                visited[v] = true;
                parent[v] = u; 
            }
        }
    }

    if (!visited[n - 1]){
        cout << "IMPOSSIBLE" << endl;
        return; 
    }

    vector<int> path;

    for (int i = n - 1; i != -1; i = parent[i]){
        path.push_back(i + 1);
    }

    reverse(path.begin(), path.end());

    cout << path.size() << endl;

    for (int v : path){
        cout << v << " ";
    }

    cout << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}