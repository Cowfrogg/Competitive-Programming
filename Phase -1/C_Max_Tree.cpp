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

struct edge {
    int u, v, x, y;
};

void solve(){
    int n;
    cin >> n;

    vector<vector<int>> outg(n);
    vector<vector<int>> ing(n);

    vector<edge> e(n - 1);
    vector<int> indeg(n);

    for (auto &[u, v, x, y] : e){
        cin >> u >> v >> x >> y;

        u--;
        v--;
        // x if pu > pv
        // y if pv > pu
        if (x > y){
            ing[u].push_back(v);
            outg[v].push_back(u);

            indeg[u]++;
        } else { 
            ing[v].push_back(u);
            outg[u].push_back(v);

            indeg[v]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < n; i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }

    vector<int> ans(n);

    for (int i = 1; i <= n; i++){
        int u = q.front();
        q.pop();

        ans[u] = i; 

        for (auto &v : outg[u]){
            indeg[v]--;

            if(indeg[v] == 0){
                q.push(v);
            }
        }
    }

    for (auto it : ans){
        cout << it << " ";
    }

    cout << endl; 

}

int main(){
    fast_io();
    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}