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

const int NMAX = 1e5 + 5; 

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n); 
    vector<int> dp(NMAX, INF);

    // state: cost to reach i
    // initial state: cost to reach i
    // transition state: k possible steps to reach i;
    // dp[i] = min(dp[i - 1] + abs(a[i - step] - a[i]), ... , dp[i - k] + abs(a[i - k] - a[k]))
    // i.e. choose best of the k previous steps

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    dp[0] = 0;

    for (int i = 1; i < n; i++){
        for (int step = 1; step <= k; step++){
            if (i - step >= 0){
                dp[i] = min(dp[i], dp[i - step] + abs(a[i - step] - a[i])); 
            }
        }
    }

    cout << dp[n - 1] << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}