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
    int n, q, g;
    cin >> n >> q >> g;

    map<int, int> m; 

    for (int i = 0; i < q; i++){
        string P;
        cin >> P;

        int s;
        cin >> s;

        int num;
        cin >> num;

        for (int j = 0; j < num; j++){
            int person;
            cin >> person;
            map[person] = s;
        }
    }
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