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
    int R, G, B;
    cin >> R >> G >> B;

    int r, g, b;
    cin >> r >> g >> b;

    int rg, gb;
    cin >> rg >> gb;

    int needR = max(0, R - r);
    int needG = max(0, G - g);
    int needB = max(0, B - b);

    if (needR > rg || needB > gb){
        cout << -1 << endl; 
        return; 
    }

    int remaining = rg + gb - needR - needB;

    if (needG > remaining){
        cout << -1 << endl; 
        return; 
    }

    cout << needG + needR + needB << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}