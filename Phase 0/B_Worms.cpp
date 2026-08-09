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

    vector<int> a(n + 1); 

    a[0] = 0;

    for (int i = 1; i < n + 1; i++){
        int num; 
        cin >> num;

        a[i] = a[i - 1] + num; 
    }

    int m; 
    cin >> m; 

    // Could've used lower_bound as well

    for (int i = 0; i < m; i++){
        int q;
        cin >> q;

        int l = 0, r = n - 1, mid, ans; 

        while (l <= r){
            mid = l + (r - l) / 2;

            if (a[mid] < q) {
                l = mid + 1; 
                ans = mid; 
            } else {
                r = mid - 1; 
            }
        }
        ans++; 

        cout << ans << endl;
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}