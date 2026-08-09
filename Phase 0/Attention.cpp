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

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> pref(n, 0);
    vector<int> suff(n, 0); 

    for (int i = 1; i < n; i++){
        pref[i] = pref[i - 1];

        if (s[i - 1] == 'W') pref[i]++; 
    }

    for (int i = n - 2; i >= 0; i--) {
        suff[i] = suff[i + 1];
        
        if (s[i + 1] == 'E') suff[i]++;
    }

    int ans = INT_MAX; 

    for (int i = 0; i < n; i++){
        int curr = pref[i] + suff[i];

        ans = min(curr, ans); 
    }

    cout << ans << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}