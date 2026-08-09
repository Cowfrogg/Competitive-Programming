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
const int N = 10e5 + 1;
const double PI = 3.14159265358979323846264338327950288419716939937510;

void solve(){
    int n, k, m;
    cin >> n >> k >> m;

    if (k > m){
        cout << "NO" << endl; 
        return; 
    }

    cout << "YES" << endl; 

    for (int i = 1; i <= n; i++){
        if (i % k == 0){
            cout << m - k + 1 << " ";
        } else {
            cout << 1 << " "; 
        }
    }

    cout << endl; 
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