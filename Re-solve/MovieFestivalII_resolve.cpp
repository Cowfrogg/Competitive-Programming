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
    int n, k;
    cin >> n >> k; 

    int ans = 0;

    vector<pair<int, int>> p(n); 

    multiset<int> m; 

    for (int i = 0; i < k; i++){
        m.insert(0);
    }

    for (int i = 0; i < n; i++){
        cin >> p[i].second >> p[i].first; 
    }  

    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++){
        int start = p[i].second, end = p[i].first;

        auto it = m.upper_bound(start);

        if (it == m.begin()){
            continue; 
        }

        it--;

        m.erase(it); 
        m.insert(end);

        ans++; 
    }

    cout << ans << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}