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

    int a[n + 1];

    if (n % 2 == 0){
        a[n] = n;

        bool flag = 1; 

        for (int i = n - 1; i > 0; i--){
            if (flag){
                a[i] = a[i + 1] - i;
            } else {
                a[i] = a[i + 1] + i;
            }

            flag ^= 1;
        }
    } else {
        a[n] = 1;

        bool flag = 0;

        for (int i = n - 1; i > 0; i--){
            if (flag){
                a[i] = a[i + 1] - i;
            } else {
                a[i] = a[i + 1] + i; 
            }

            flag ^= 1;
        }
        
    }

    for (int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }

    cout << endl; 
}

int main(){
    fast_io();

    int t;
    cin >> t;

    while (t--){
        solve(); 
    }

    return 0;
}