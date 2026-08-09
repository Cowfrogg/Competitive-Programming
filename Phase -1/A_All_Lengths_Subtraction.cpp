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

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n; 

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0, r = n - 1;

    for (int i = 1; i <= n; i++){
        if(a[l] == i){
            l++;
        } else if(a[r] == i){
            r--;
        } else {
            NO;
            return;
        }
    }

    YES;
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