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
    int h, w, n; 
    cin >> h >> w >> n;

    vector<pair<int, int>> cards(n);
    vector<int> r(n), c(n);


    for (int i = 0; i < n; i++){
        cin >> cards[i].first >> cards[i].second;

        r[i] = cards[i].first;
        c[i] = cards[i].second;
    }

    sort(r.begin(), r.end());
    r.erase(unique(r.begin(), r.end()), r.end());

    sort(c.begin(), c.end()); 
    c.erase(unique(c.begin(), c.end()), c.end());

    for (auto [row, col] : cards){
        int nrow = lower_bound(r.begin(), r.end(), row) - r.begin() + 1;
        int rcol = lower_bound(c.begin(), c.end(), col) - c.begin() + 1; 

        cout << nrow << " " << rcol << endl; 
    }

}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}