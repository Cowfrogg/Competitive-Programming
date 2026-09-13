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
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<ll> diff (n + 1);

    for (int i = 0; i < n; i++){
        ll k = i + 1; 
        ll m = a[i]; 

        ll l = m * k;
        ll r = (m + 1) * k - 1; 

        if (l >= n){
            continue; 
        }

        r = min(r, n - 1); 

        diff[l]++; 
        diff[r + 1]--; 
    }

    vector<int> ans;

    int cur = 0;

    for (int i = 0; i < n; i++){
        cur += diff[i]; 

        if (cur == 0){
            ans.push_back(i); 
        }
    }

    cout << ans.size() << endl;

    for (auto it : ans){
        cout << it << " ";
    }

    cout << endl;
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