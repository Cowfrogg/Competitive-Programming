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
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s; 

    vector<int> pref (n, 0); 

    for (int i = 1; i < n; i++){
        pref[i] = pref[i - 1]; 
        if (s[i - 1] == 'A' && s[i] == 'C'){
            pref[i]++; 
        } 
    }  

    for (int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;

        l--, r--; 

        cout << pref[r] - pref[l] << endl; 
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}