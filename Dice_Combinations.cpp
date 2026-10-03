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

const int NMAX = 1e6 + 5; 

void solve(){
    int n;
    cin >> n;

    vector<int> dp(NMAX, 0); 
    dp[0] = 1; 

    // initial state: only one way of getting a sum of 0
    // transition state: 6 possible ways of getting sum i; rolling dice num 1 to 6
    // dp[i] = dp[i - 1] + dp[i - 2] + ... + dp[i - 6];


    for (int i = 1; i <= n; i++){
        for (int num = 1; num <= 6; num++){
            if(i - num >= 0){
                dp[i] = (dp[i] + dp[i - num]) % MOD; 
            }
        }
    }

    cout << dp[n];
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}