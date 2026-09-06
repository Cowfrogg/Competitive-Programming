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

    int mn = INT_MAX, mx = INT_MIN; 

    for (int i = 0; i < n; i++){
        cin >> a[i]; 

        mn = min(a[i], mn); 
        mx = max(a[i], mx); 
    }

    vector<int> b = a; 

    sort(b.begin(), b.end()); 

    if (a == b){
        cout << -1 << endl; 

        return; 
    }

    int ans = INT_MAX; 

    for (int i = 0; i < n; i++){
        if (a[i] == b[i]){
            continue; 
        }

        ans = min(ans, max(a[i] - mn, mx - a[i])); 
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