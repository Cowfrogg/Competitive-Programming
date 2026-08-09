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
vector<string> grid;
vector<vector<bool>> visited;

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

void bfs(int sr, int sc){
    queue<pair<int, int>> q;

    q.push({sr, sc});

    while (!q.empty()){
        auto [r, c] = q.front(); 

        q.pop();

        for (int k = 0; k < 4; k++){
            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr < 0 || nc < 0 || nr >= n || nc >= m){
                continue;
            }
            
            if (grid[nr][nc] == '#'){
                continue;
            }

            if (visited[nr][nc]){
                continue;
            }
            
            q.push({nr, nc});
            visited[nr][nc] = true; 
        }
    }   
}

void solve(){
    cin >> n >> m;

    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++){
        cin >> grid[i]; 
    }

    int ans = 0;

    for (int r = 0; r < n; r++){
        for (int c = 0; c < m; c++){
            if (!visited[r][c] && grid[r][c] == '.'){
                ans++;
                bfs(r, c);
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