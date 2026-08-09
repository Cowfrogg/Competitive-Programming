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

    if (s.find("><") != -1 || s.find(">*") != -1 || s.find("*<") != -1 || s.find("**") != -1){
        cout << -1 << endl; 
        return; 
    }

    int n = s.size();
    int x = 0, y = 0;

    while (x < n && s[x] == '<')x++;

    reverse(s.begin(), s.end());

    while (y < n && s[y] == '>')y++;

    cout << max(n - x, n - y) << endl; 
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