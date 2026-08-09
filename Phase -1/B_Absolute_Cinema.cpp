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
    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    ll maxAB = 0;
    ll maxA = 0;

    for (int i = 0; i < n; i++){
        maxAB += max(a[i], b[i]);
        maxA = max(maxA, min(a[i], b[i]));
    }

    ll s = maxAB + maxA;

    cout << s << endl; 
}
 
int main(){
    fast_io();  
 
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}