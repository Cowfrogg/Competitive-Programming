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
 
    unordered_map<char, int> m;
 
    for (char c : s){
        m[c]++;
    }
 
    int oddcount = 0;
    char oddchar;
 
    for (auto const& [c, count] : m){
        if (count % 2 == 1){
            oddcount++;
            oddchar = c;
        }
    }
 
    if (oddcount > 1){
        cout << "NO SOLUTION" << endl;
        return;
    }
 
    string fh, sh;
 
    for (auto const& [c, count] : m){
        for (int i = 0; i < count / 2; i++){
            fh += c;
        }
    }
 
    sh = fh;
 
    reverse(sh.begin(), sh.end());

    string ans;
 
    if (oddcount == 1){
        ans = fh + oddchar + sh;
    } else {
        ans = fh + sh;
    }
 
    cout << ans << endl; 
}
 
int main(){
    fast_io();  
 
    solve();
    
    return 0;
}