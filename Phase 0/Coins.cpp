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
    int a, b, c;
    cin >> a >> b >> c;

    int x;
    cin >> x;

    int count = 0;

    for (int i = 0; i <= a; i++){
        for (int j = 0; j <= b; j++){
            for (int k = 0; k <= c; k++){
                if (500 * i + 100 * j + 50 * k == x) count++; 
            }
        }
    }

    cout << count << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}