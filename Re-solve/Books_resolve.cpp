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

    vector<int> a(n); 

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    int ans = 0, sum = 0;

    int r = 0;

    for (int l = 0; l < n; l++){
        while (r < n && sum + a[r] <= k){
            sum += a[r];

            ans = max(ans, r - l + 1); 

            r++;
        }

        sum -= a[l]; 
    }

    cout << ans << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}