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
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n / 2; i++){
        int idx1 = 2 * i;
        int idx2 = 2 * i + 1;

        swap(s[idx1], s[idx2]);
    }

    cout << s << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}