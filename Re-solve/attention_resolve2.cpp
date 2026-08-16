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
    string s;

    cin >> n >> s;

    vector<int> pref(n); 
    vector<int> suff(n);

    for (int i = 1; i < n; i++){
        if (s[i - 1] == 'W'){
            pref[i]++; 
        }

        pref[i] += pref[i - 1]; 
    }

    for (int i = n - 2; i >= 0; i--){
        if (s[i + 1] == 'E'){
            suff[i]++; 
        }

        suff[i] += suff[i + 1] ;
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++){
        ans = min(ans, suff[i] + pref[i]); 
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}