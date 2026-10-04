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
const ll MOD = 998244353;
const int INF = 1e9;
const long long LINF = 4e18;

void fast_io(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

const long long NMAX = 1e18 + 5; 

void solve(){
    ll n; 
    cin >> n;

    ll a = n, b = n + 1, c = n + 2;

    if (a % 2 == 0){
        a /= 2;
    } else if (b % 2 == 0) {
        b /= 2; 
    }

    if (a % 3 == 0) {
        a /= 3;
    } else if (b % 3 == 0){
        b /= 3; 
    } else if (c % 3 == 0) {
        c /= 3; 
    }

    a %= MOD;
    b %= MOD;
    c %= MOD;

    ll ans = (a * b) % MOD;
    ans = (ans * c) % MOD;
    
    cout << ans << endl;
}

int main(){
    fast_io();  

    solve(); 
    
    return 0;
}