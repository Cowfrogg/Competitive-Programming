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

void solve() {
    int n;
    cin >> n;

    vector<tuple<int, int, int>> t;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        t.push_back({a, b, i}); 
    }

    sort(t.begin(), t.end());

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int roomcount = 0;

    vector<int> ans(n); 

    for (int i = 0; i < n; i++){
        auto [arrival, departure, index] = t[i];
        if (!pq.empty() && pq.top().first < arrival){
            auto [prevDep, roomid] = pq.top(); 

            pq.pop();

            pq.push({departure, roomid});

            ans[index] = roomid;
        } else {
            roomcount++;

            pq.push({departure, roomcount});

            ans[index] = roomcount; 
        }
    }

    cout << pq.size() << endl;

    for (auto it : ans){
        cout << it << " ";
    }

    cout << endl;
}

int main() {
    fast_io();
    
    solve();
    return 0;
}