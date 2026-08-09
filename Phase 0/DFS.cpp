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

// BFS template

int n;
vector<bool> visited(n, false);
vector<vector<int>> graph(n); 

void dfs(int u) { // u as the starting node 
    visited[u] = true;

    for (int v : graph[u]){
        if (!visited[v]){
            dfs(v); 
        }
    }
}

void dfs_stack(){
    int n;
    vector<bool> visited(n, false);
    vector<vector<int>> graph(n);

    stack<int> s;

    int start;
    s.push(start);

    while (!s.empty()) {
        int u = s.top();
        s.pop();

        for (int v : graph[u]){
            if(!visited[v]) {
                s.push(v);
                visited[v] = true;  
            }
        }
    }
}

void solve() {
    
}   

int main() {
    fast_io();
    
    solve();
    
    return 0;
}