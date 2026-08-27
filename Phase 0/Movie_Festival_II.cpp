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

    multiset<int> s;

    for (int i = 0; i < k; i++){
        s.insert(0); 
    }

    vector<pair<int, int>> p(n); 

    for (int i = 0; i < n; i++){
        cin >> p[i].second >> p[i].first; 
    }

    sort(p.begin(), p.end());

    int ans = 0;

    // Check in multiset first element that is smaller than the starting time of the current movie

    for (int i = 0; i < n; i++){
        int start = p[i].second, end = p[i].first;

        auto it = s.upper_bound(start);

        if (it == s.begin()){
            continue; 
        }

        it--; 

        s.erase(it);

        s.insert(end);

        ans++;
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}