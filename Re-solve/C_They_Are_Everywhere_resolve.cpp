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

void solve() {
    int n;
    string s;
    cin >> n >> s;

    set<char> count;  

    for (int i = 0; i < n; i++){
        count.insert(s[i]); 
    }

    int k = count.size(); 

    int l = 0, ans = INT_MAX;

    map<char, int> m; 
    int distinct = 0;

    for (int r = 0; r < n; r++){
        if (m[s[r]] == 0){
            distinct++; 
        }

        m[s[r]]++; 

        while(distinct == k){
            ans = min(ans, r - l + 1); 

            m[s[l]]--;

            if (m[s[l]] == 0){
                distinct--;
            }

            l++; 
        } 
    }

    cout << ans << endl;
}

int main() {
    fast_io();
    
    solve();
    return 0;
}