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

// Mind solved; Implement when I feel like it :>

const int MAXN = 5 * 10e4 + 5; 

int n, m; 
vector<int> dist(MAXN, -1); 
queue<int> q; 

int bfs(int start){ 
    q.push(start);
    dist[start] = 0; 

    while(!q.empty()){
        int u = q.front();

        q.pop();

        if (u == m){
            return dist[u];
        }

        int a = u * 2, b = u - 1;

        if (a <= MAXN && dist[a] == -1){
            dist[a] = dist[u] + 1;

            q.push(a); 
        }

        if (dist[b] == -1 && b > 0){
            dist[b] = dist[u] + 1;

            q.push(b); 
        }
    }
}

void solve(){
    cin >> n >> m;

    int ans = bfs(n);  

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}