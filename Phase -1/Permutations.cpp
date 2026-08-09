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

    if (n == 1){
        cout << 1;
        return; 
    }

    if (n < 4 ){
        cout << "NO SOLUTION" << endl;

        return;
    }

    vector<int> a(n);

    int curr = n - 1;
    a[0] = curr;

    for (int i = 1; i < n; i++){
        if (curr - 2 < 1){
            curr = n; 
            a[i] = curr;
        } else {
            curr -= 2;
            a[i] = curr;
        }
    }

    for (auto it : a){
        cout << it << " ";
    }
}

int main(){
    fast_io();

    solve();

    return 0;
}