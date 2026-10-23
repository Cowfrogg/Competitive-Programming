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

    vector<vector<char>> grid (n, vector<char> (n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> grid[i][j]; 
        }
    }

    vector<vector<int>> dp (n, vector<int>(n));

    if (grid[0][0] == '*'){
        dp[0][0] = 0;
    } else {
        dp[0][0] = 1; 
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (grid[i][j] == '*'){
                continue; 
            }

            if (i > 0 && j > 0){
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }

            if (i == 0 && j == 0){
                continue;
            }

            if (i > 0 && j == 0){
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }

            if (i == 0 && j > 0){
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    cout << dp[n - 1][n - 1] << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}