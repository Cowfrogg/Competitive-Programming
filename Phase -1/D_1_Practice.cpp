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

const int NMAX = 305;

void addself (int &x, int y){
    x += y;

    if (x >= MOD){
        x -= MOD;
    }
}

void solve(){
    int n;
    cin >> n;

    int a[n + 1], b[n + 1];

    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }

    for (int i = 1; i <= n; i++){
        a[i] = 1;

        for (int j = 1; j < i; j++){
            if (b[j] <= b[i]){
                a[i]++;
            }
        }

        for (int j = i + 1; j <= n; j++){
            if (b[j] < b[i]){
                a[i]++;
            }
        }
    }

    int dp[2][n + 1][n + 1];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j <= n; j++){
            for (int q = 0; q <= n; q++){
                dp[i][j][q] = 0;
            }
        }
    }

    dp[0][0][0] = 1; 

    int cr = 0;

    for (int i = 1; i <= n; i++){
        int x = a[i]; 
        cr ^= 1; 

        for (int j = 0; j <= n; j++){
            for (int q = 0; q <= n; q++){
                dp[cr][j][q] = dp[cr ^ 1][j][q];
            }
        }

        for (int j = 0; j <= n; j++){
            for (int q = 0; q <= j; q++){
                if (dp[cr ^ 1][j][q] == 0){
                    continue;
                }
                if (j > x && x > q){
                    addself (dp[cr][j][x], dp[cr ^ 1][j][q]);
                } else if (x > j){
                    addself (dp[cr][x][q], dp[cr ^ 1][j][q]);
                }
            }
        }
    }

    int ans = 0;

    for (int j = 0; j <= n; j++){
        for (int q = 0; q <= n; q++){
            addself (ans, dp[cr][j][q]);
        }
    }
    cout << ans << endl;
}

int main(){
    fast_io();
    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}