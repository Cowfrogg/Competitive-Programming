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
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n); 

    for (ll i = 0; i < n; i++){
        cin >> a[i]; 
    }

    vector<ll> pref(n);

    pref[0] = a[0]; 

    for (ll i = 1; i < n; i++){
        pref[i] = pref[i - 1] + a[i]; 
    }

    while(q--){
        ll first, second;
        cin >> first >> second;

        first--;
        second--; 

        cout << pref[second] - pref[first] + a[first] << endl;
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}