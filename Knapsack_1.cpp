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
    ll n, w;
    cin >> n >> w;

    vector<ll> dp(w + 1); 

    for (int i = 0; i < n; i++){
        ll wi, v; 
        cin >> wi >> v; 

        for (int j = w; j >= wi; j--){
            dp[j] = max(dp[j], dp[j - wi] + v);
        }
    }

    cout << dp[w] << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}