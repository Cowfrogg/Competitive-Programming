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

    vector<vector<int>> dp (n, vector<int> (3));

    vector<int> a(n), b(n), c(n); 

    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    dp[0][0] = a[0];
    dp[0][1] = b[0]; 
    dp[0][2] = c[0]; 

    for (int i = 1; i < n; i++){
        dp[i][0] = a[i] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = b[i] + max(dp[i - 1][0], dp[i - 1][2]); 
        dp[i][2] = c[i] + max(dp[i - 1][0], dp[i - 1][1]); 
    }

    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}