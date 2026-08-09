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

void solve(){
    int n, k;
    cin >> n >> k;

    k--; 

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++){
        int first, second;
        cin >> first >> second;

        v[i] = {first, second};
    }

    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        if (a.first != b.first){
            return a.first > b.first;
        }

        return a.second < b.second;
    });

    pair<int, int> target = v[k];

    int ans = 0;

    for (int i = 0; i < n; i++){
        if (v[i] == target) ans++;
    }

    cout << ans << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}