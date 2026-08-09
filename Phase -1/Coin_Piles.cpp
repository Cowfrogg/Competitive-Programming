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
    ll a, b;
    cin >> a >> b;

    if ((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)){
        cout << "YES" << endl;
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