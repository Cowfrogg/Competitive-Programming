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
    int n, q;
    cin >> n >> q;

    vector<int> diff(n + 1, 0); 

    for (int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        
        a--;
        b--;

        diff[a] ^= 1;
        diff[b + 1] ^= 1;
    }

    int curr = 0;

    for (int i = 0; i < n; i++){
        curr ^= diff[i]; 

        cout << curr;
    }

    cout << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}