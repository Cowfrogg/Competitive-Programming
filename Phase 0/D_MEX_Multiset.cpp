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

    int cnt = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i]; 

        if (a[i] == 0){
            cnt++;
        }
    }

    vector<char> ans(n);
    bool ok = false; 

    if (cnt == 0){
        ok = true; 

        for (int i = 0; i < n; i++){
            ans[i] = 'A'; 
        }

    } else if (cnt == 1){
        ok = false; 
    } else { 
        ok = true; 

        int used = 0;

        for (int i = 0; i < n; i++){
            if (a[i] != 0) {
                ans[i] = 'C'; 
            } else {
                if (used == 0){
                    ans[i] = 'A'; 
                } else {
                    ans[i] = 'B'; 
                }
                used++; 
            }
        }
    }

    if (ok){
        cout << "YES" << endl; 

        for (auto it : ans){
            cout << it; 
        }

        cout << endl;
    } else {
        cout << "NO" << endl; 
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