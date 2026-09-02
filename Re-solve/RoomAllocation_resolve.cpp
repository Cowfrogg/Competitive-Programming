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

void solve(){
    int n;
    cin >> n;

    vector<tuple<int, int, int>> client(n); 

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        client[i] = {a, b, i}; 
    }

    sort(client.begin(), client.end());

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> ans(n); 

    int count = 0; 

    for (int i = 0; i < n; i++){
        auto [arrival, departure, index] = client[i];

        if (!pq.empty() && pq.top().first < arrival){
            auto [prevDep, roomid] = pq.top();

            pq.pop(); 

            pq.push({departure, roomid});

            ans[index] = roomid; 
        } else {
            count++;

            pq.push({departure, count}); 

            ans[index] = count; 
        }
    }

    cout << count << endl; 

    for (auto it : ans){
        cout << it << " "; 
    }

    cout << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}