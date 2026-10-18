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

const int nmax = 1e6 +5 ;

void solve(){
    int n, x;
    cin >> n >> x;

    vector<int> dp(x + 1, INT_MAX);
    vector<int> coins(n);

    dp[0] = 0;

    for (int i = 0; i < n; i++){
        cin >> coins[i]; 
    }

    for (int i = 1; i <= x; i++){
        for (int j = 0; j < n; j++){
            if (coins[j] > i){
                continue; 
            }

            if (dp[i - coins[j]] != INT_MAX){
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    if (dp[x] == INT_MAX){
        cout << -1 << endl; 
    } else {
        cout << dp[x] << endl;
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}