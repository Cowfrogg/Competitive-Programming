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

    for (ll i = 0; i < n; i++){
        cin >> a[i]; 
    }

    vector<ll> apref(n);

    apref[0] = a[0];

    for (ll i = 1; i < n; i++){
        apref[i] = apref[i - 1] + a[i]; 
    }

    vector<ll> b = a;

    sort(b.begin(), b.end());

    vector<ll> bpref(n);

    bpref[0] = b[0]; 

    for (ll i = 1; i < n; i++){
        bpref[i] = bpref[i - 1] + b[i]; 
    }

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++){
        ll type, first, second; 
        cin >> type >> first >> second;

        first--;
        second--; 

        if (type == 1){
            cout << apref[second] - apref[first] + a[first] << endl; 
        } else {
            cout << bpref[second] - bpref[first] + b[first] << endl;
        }
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}