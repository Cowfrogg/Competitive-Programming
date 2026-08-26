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
    int n;
    cin >> n;

    if (n == 1){
        cout << 1 << endl;
        return; 
    }

    vector<pair<int, int>> p(n); 

    for (int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second; 
    }

    ll ans = 2;
    ll last = p[0].first; 

    for (int i = 1; i < n - 1; i++){
        int x = p[i].first;
        int h = p[i].second;

        if (x - h > last){
            last = x;
            ans++; 
        } else if (x + h < p[i + 1].first){
            last = x + h;
            ans++; 
        } else {
            last = x;
        }
    }

    cout << ans << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}