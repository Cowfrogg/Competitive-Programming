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

int rdir[4] = {1, -1, 0, 0}; 
int cdir[4] = {0, 0, -1, 1}; 
vector<string> grid;
vector<vector<bool>> visited;
int n, m; 

void dfs(int r, int c){
    visited[r][c] = true; 
    for (int k = 0; k < 4; k++){
        int nr = r + rdir[k]; 
        int nc = c + cdir[k];

        if (nc < 0 || nr < 0 || nc >= m || nr >= n){
            continue; 
        }
        if (grid[nr][nc] == '#'){
            continue;
        }
        if (visited[nr][nc]){
            continue; 
        }

        dfs(nr, nc);
    }
}

void solve(){
    cin >> n >> m; 

    grid.resize(n);  
    visited.assign(n, vector<bool> (m, false)); 

    for (int i = 0; i < n; i++){
        cin >> grid[i]; 
    }

    int ans = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (grid[i][j] == '.' && !visited[i][j]){
                dfs(i, j); 
                ans++; 
            }
        }
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}