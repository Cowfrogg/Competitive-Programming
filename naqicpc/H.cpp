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

const int MAXT = 205; 

void solve(){;
    char previous;

    for (int i = 1; i <= 200; i++){
        char correct;

        /*
        if (i % 2 == 1){
            cout << 'T' << endl; 
        } else {
            if (previous = 'T'){
                cout << 'F' << endl;
            } else {
                cout << 'T' << endl;
            }
        } 
        */

        cout << 'T' << endl;

        cin >> correct;
        previous = correct;
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