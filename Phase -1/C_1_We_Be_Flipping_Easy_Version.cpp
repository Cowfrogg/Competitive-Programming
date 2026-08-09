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

    for (ll i = 0; i < n; i++) {cin >> a[i];}

    vector<ll> b;

    ll flag = 0;

    ll count = 0; 

    for (ll i = n - 1; i >= 0; i--){
        if (flag == 0 && a[i] > 0){
            b.push_back(i + 1);
            flag = 1; 
            count++;
        }
        if (flag == 1 && a[i] < 0){
            b.push_back(i + 1);
            flag = 0;
            count++;
        }
    }

    cout << count << endl;

    for (ll it : b){
        cout << it << " ";
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