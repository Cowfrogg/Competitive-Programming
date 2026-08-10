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

    vector<ll> a(n), b(n), c(n); 

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    for (int i = 0; i < n; i++){
        cin >> b[i]; 
    }

    for (int i = 0; i < n; i++){
        cin >> c[i]; 
    }

    sort(a.begin(), a.end()); 
    sort(b.begin(), b.end()); 
    sort(c.begin(), c.end());

    ll total = 0;

    for (int i = 0; i < n; i++){
        ll current = b[i];

        ll idxa = lower_bound(a.begin(), a.end(), current) - a.begin(); 

        ll idxc = c.end() - upper_bound(c.begin(), c.end(), current); 

        total += idxa * idxc;
    }

    cout << total << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}