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

    vector<int> a(n); 

    int oddcnt = 0, evencnt = 0, mod4cnt = 0; 

    for (int i = 0; i < n; i++){
        cin >> a[i]; 

        if (a[i] % 2 == 1){
            oddcnt++; 
        } else if (a[i] % 4 == 0){
            mod4cnt++; 
        } else {
            evencnt++; 
        }
    }

    int ans = max({oddcnt, evencnt, mod4cnt}); 

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