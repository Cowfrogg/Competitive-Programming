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
const long long LINF = 4e18;

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

const int MOD = 1e9 + 7;
const int INF = 1e9;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1}; 

void dfs(int r, int c){
    visited[r][c] = true;

    for (int k = 0; k < 4; k++){
        int nr = r + dr[k];
        int nc = c + dc[k];

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

void solve() {
    cin >> n >> m;

    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++){
        cin >> grid[i];
    }

    int ans = 0;

    for (int r = 0; r < n; r++){
        for (int c = 0; c < m; c++){
            if (grid[r][c] == '.' && !visited[r][c]){
                ans++;
                dfs(r, c);
            }
        }
    }

    cout << ans << endl; 
}

int main() {
    fast_io();
    
    solve();
    
    return 0;
}