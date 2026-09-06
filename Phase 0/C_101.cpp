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

    vector<int> a(n); 

    bool flag = 1; 

    for(int i = 0; i < n; i++){
        cin >> a[i];

        if (a[i] == 1 || a[i] == -1){
            flag = 0;
        }
    }

    if (flag){
        for (auto it : a){
            cout << it << " "; 
        }

        cout << endl; 

        return; 
    }

    int lidx = 0, ridx = n - 1; 

    while (a[lidx] == 0){
        lidx++;
    }

    while (a[ridx] == 0){
        ridx--; 
    }

    a[lidx] = 1; 
    a[ridx] = 1; 

    for (int i = lidx + 1; i < ridx; i++){
        if (a[i] == -1){
            a[i] = 0; 
        }
    }

    for (auto it : a){
        cout << it << " "; 
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