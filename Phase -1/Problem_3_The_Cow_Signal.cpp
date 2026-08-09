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
    int m, n, k;
    cin >> m >> n >> k;

    vector<string> s(m);

    for (int i = 0; i < m; i++){
        cin >> s[i];
    }

    for (int i = 0; i < m * k; i++){
        for (int j = 0; j < n * k; j++){
            cout << s[i / k][j / k];
        }
        cout << endl; 
    }
}
 
int main(){
    fast_io();  
 
    solve();

    return 0;
}