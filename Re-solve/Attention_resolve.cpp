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

    string a;
    cin >> a;

    vector<int> pref(n); 
    vector<int> suf(n);

    pref[0] = 0;

    for (int i = 1; i < n; i++){
        pref[i] = pref[i - 1];

        if(a[i - 1] == 'W'){
            pref[i]++; 
        }
    }

    suf[0] = 0; 

    for (int i = n - 2; i >= 0; i--){
        suf[i] = suf[i + 1];

        if(a[i + 1] == 'E'){
            suf[i]++;
        }
    }
    
    int ans = INT_MAX;

    for (int i = 0; i < n; i++){
        int turn = pref[i] + suf[i];

        ans = min(ans, turn);
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}