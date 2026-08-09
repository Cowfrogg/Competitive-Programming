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

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    if (n == 1){
        cout << a[0] << " " << 0 << endl;
        return; 
    }

    int l = 0, r = n - 1;

    int s = 0, d = 0; 

    int flag = 1;

    while (l <= r){
        int curr;

        if (a[l] >= a[r]){
            curr = a[l];
            l++; 
        } else {
            curr = a[r]; 
            r--; 
        }

        if (flag){
            s += curr;
        } else {
            d += curr;
        }

        flag ^= 1; 
    }

    cout << s << " " << d << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}