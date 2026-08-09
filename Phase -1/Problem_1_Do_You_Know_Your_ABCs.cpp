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
    vector<ll> a(7);

    for (int i = 0; i < 7; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll A = a[0], B = a[1], C = a[6] - (A + B);

    cout << A << " " << B << " " << C << endl; 

}
 
int main(){
    fast_io();  
 
    solve();
    
    return 0;
}