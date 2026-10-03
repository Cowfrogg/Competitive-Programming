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

const int NMAX = 2 * 1e5 + 5; 

int n, m; 
vector<vector<int>> graph(NMAX);
vector<int> indegree(NMAX); 
vector<int> ans; 


void solve(){
    cin >> n >> m; 

    for (int i = 0; i < m; i++){
        int u, v; 
        cin >> u >> v;
        u--, v--; 

        graph[u].push_back(v); 
        indegree[v]++;
    }

    queue<int> q;

    for (int i = 0; i < n; i++){
        if (indegree[i] == 0){
            q.push(i);
        }
    }

    while (!q.empty()){
        int v = q.front();  
        q.pop();

        ans.push_back(v);

        for (int u : graph[v]){
            indegree[u]--;

            if (indegree[u] == 0){
                q.push(u); 
            }
        }
    }

    if (ans.size() != n){
        cout << "IMPOSSIBLE" << endl;
        return; 
    }

    for (int it : ans){
        cout << it + 1 << " "; 
    }

    cout << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}