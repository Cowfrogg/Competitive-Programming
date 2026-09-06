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

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    vector<int> diff(n + 1); 

    for (int i = 0; i < n; i++){
        if (a[i] == -1 || a[i] == 0){
            continue; 
        }

        int l = max(0, i - a[i] + 1), r = min(n - 1, i + a[i]); 

        if (l <= r){
            diff[l]++;
            diff[r]--; 
        }
    }

    vector<bool> taken(n);

    int cur = 0;

    for (int i = 0; i < n; i++){
        cur += diff[i]; 

        if (cur > 0){
            taken[i] = true; 
        }
    }

    vector<int> ans(n);

    bool valid = 0;

    for (int i = 0; i < n; i++){
        if (!taken[i]){
            ans[i] = 1;
            valid = 1; 
        }
    }

    if (!valid){
        cout << -1 << endl;
        return; 
    }

    for (int i = 0; i < n; i++){
        if (a[i] == -1){
            continue; 
        }

        int l = i - a[i];
        int r = i + a[i];

        bool possible = 0;

        if (l >= 0 && ans[l]){
            possible = 1; 
        }

        if (r < n && ans[r]){
            possible = 1; 
        }

        if (!possible){
            cout << -1 << endl;
            return; 
        }
    }

    for (auto it : ans){
        cout << it; 
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