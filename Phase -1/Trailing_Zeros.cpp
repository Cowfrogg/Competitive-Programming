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

    ll ans = 0;

    while (n > 0){
        n /= 5;
        ans += n;
    }

    cout << ans << endl; 

}

int main(){
    fast_io();  

    solve();

    return 0;
}