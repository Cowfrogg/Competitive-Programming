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
const int NMAX = 1e6; 

int n, m; 
vector<vector<int>> graph(NMAX);
vector<int> color(NMAX, -1); 

bool bfs(int start){
    queue<int> q; 

    q.push(start); 
    color[start] = 1;

    while(!q.empty()){
        int v = q.front(); 
        q.pop();

        for (int u : graph[v]){
            if (color[u] == color[v]){
                return false; 
            }
            if (color[u] == -1){
                color[u] = 3 - color[v];
                q.push(u);
            }
        }
    }

    return true; 
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

    for (int i = 0; i < n; i++){
        if (color[i] == -1){
            if(!bfs(i)){
                cout << "IMPOSSIBLE" << endl;
                return; 
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << color[i] << " ";
    }

    cout << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}