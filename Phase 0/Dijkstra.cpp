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
const long long LINF = 4e18;

void Dijkstra(){
    int n;
    vector<vector<pair<int,int>>> graph(n);
    vector<int> distance(n, INF);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int start;

    pq.push({0, start});
    distance[start] = 0;

    while(!pq.empty()) {
        auto [currentdistance, u] = pq.top();
        pq.pop();

        if (currentdistance != distance[u]){
            continue; 
        }

        for (auto [v, weight] : graph[u]) {
            int newdist = currentdistance + weight;

            if (newdist < distance[v]) {
                distance[v] = newdist;
                pq.push({newdist, v});
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