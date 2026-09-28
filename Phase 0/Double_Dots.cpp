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

const int NMAX = 1e6 + 5; 

int n, m; 
vector<vector<int>> graph(NMAX);
vector<int> parent(NMAX, -1);  
vector<int> dist(NMAX, -1); 
queue<int> q;


void bfs(int start){ 
    q.push(start); 

    dist[start] = 0; 

    while(!q.empty()){
        int v = q.front();
        q.pop();

        for (int u : graph[v]){
            if (dist[u] == -1){
                dist[u] = dist[v] + 1; 
                parent[u] = v; 

                q.push(u); 
            }
        }
    }
}

void solve(){
    cin >> n >> m; 

    for (int i = 0; i < m; i++){
        int u, v; 
        cin >> u >> v;

        u--, v--; 

        graph[u].push_back(v); 
        graph[v].push_back(u);
    }

    bfs(0); 

    for (int i = 0; i < n; i++){
        if (dist[i] == -1){
            cout << "No" << endl;
            return; 
        }
    }

    cout << "Yes" << endl;

    for (int i = 1; i < n; i++){
        cout << parent[i] + 1 << endl;
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}