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
    ll y, x;
    cin >> y >> x;

    if (y <= x){
        if (x % 2 == 1){
            cout << x * x - y + 1 << endl;
        } else {
            cout << (x - 1) * (x - 1) + y << endl; 
        }
    } else {
        if (y % 2 == 0){
            cout << y * y - x + 1 << endl;
        } else {
            cout << (y - 1) * (y - 1) + x << endl;  
        }
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