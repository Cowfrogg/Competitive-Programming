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

void basic_BFS_template(){
    int n;
    vector<vector<int>> graph(n);
    queue<int> q;
    vector<bool> visited(n, false);

    int start;
    q.push(start); 

    while (!q.empty()){
        int u = q.front();

        q.pop();

        for (int v : graph[u]){
            if (!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void BFS_shortest_path(){ // with path reconstruction
    int n;
    vector<vector<int>> graph(n);
    queue<int> q;
    vector<int> distance(n, -1);
    vector<int> parent(n, -1); 

    int start;
    q.push(start); 

    distance[start] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for (int v : graph[u]){
            if (distance[v] == -1){
                distance[v] = distance[u] + 1;
                q.push(v); 
                parent[v] = u;
            }
        }
    }

    vector<int> path;

    int target; // Final node

    for (int cur = target; cur != -1; cur = parent[cur]){
        path.push_back(cur); 
    }

    reverse(path.begin(), path.end()); 
}

void solve(){
    
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}