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
    int n;
    cin >> n;

    int mx = INT_MIN, mn = INT_MAX;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if (num > mx){
            mx = num;
        }
        if (num < mn){
            mn = num;
        }
    }

    int diff = mx - mn + 1;

    cout << diff / 2 << endl;
    
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