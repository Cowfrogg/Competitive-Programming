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

    if (k < n || k == 2 * n){
        cout << -1 << endl;
        return; 
    }

    vector<vector<int>> ans(n, vector<int>(n));

    int common = 2 * n - k;
    int diagonal = common - 1;

    int cur = 1;

    for (int i = 0; i < diagonal; i++){
        ans[i][i] = cur;
        cur++;
    }

    for (int i = diagonal; i < n; i++){
        for (int j = diagonal; j < n; j++){
            ans[i][j] = cur;

            cur++; 
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (ans[i][j] == 0){
                ans[i][j] = cur;

                cur++; 
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << ans[i][j] << " "; 
        }

        cout << endl;
    }
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