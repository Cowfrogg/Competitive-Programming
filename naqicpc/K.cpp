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

    int ans = -1;

    for (int i = 1; i <= 9; i++){
        int cur = i;

        if (cur >= n && (ans == -1 || cur < ans)){
            ans = cur; 
        }

        for (int digit = i + 1; digit <= 9; digit++){
            cur = cur * 10 + digit;

            if (cur >= n && (ans == -1 || cur < ans)){
                ans = cur; 
            }
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