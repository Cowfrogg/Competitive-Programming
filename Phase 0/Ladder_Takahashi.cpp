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

int n;
unordered_map<int, vector<int>> graph;
unordered_set<int> visited;

int highest;

void dfs(int u){
    visited.insert(u);

    highest = max(highest, u); 

    for (int v : graph[u]){
        if (!visited.count(v)){
            dfs(v); 
        }
    }
}

void solve(){
    cin >> n;

    highest = 0;

    for (int i = 0; i < n; i++){
        int u, v; 
        cin >> u >> v;
        u--, v--; 

        graph[v].push_back(u);
        graph[u].push_back(v);
    }

    dfs(0);

    cout << highest + 1 << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}