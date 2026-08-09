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

long long n, m;
vector<vector<pair<long, long>>> graph;
vector<long long> dist;

void solve(){
    cin >> n >> m;

    graph.resize(n);
    dist.assign(n, LINF);

    for (int i = 0; i < m; i++){
        long long u, v, weight;
        cin >> u >> v >> weight;
        u--, v--;

        graph[u].push_back({v, weight});
    }

    priority_queue<pair<long long, long long>, 
    vector<pair<long long, long long>>, 
    greater<pair<long long, long long>>> 
    pq;

    pq.push({0, 0});

    dist[0] = 0;

    while(!pq.empty()){
        auto [currentdistance, u] = pq.top();

        pq.pop();

        if (dist[u] != currentdistance){ // or distance[u] < currentdistance
            continue; // priority queue explores better paths first
        }

        for (auto [v, weight] : graph[u]){
            long long newdistance = currentdistance + weight;

            if (newdistance < dist[v]){
                dist[v] = newdistance;
                pq.push({newdistance, v});
            }
        }
    }

    for (auto it : dist){
        cout << it << " ";
    }

    cout << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}