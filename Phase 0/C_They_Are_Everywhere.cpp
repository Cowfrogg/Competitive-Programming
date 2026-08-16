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

// Shortest substring which contains all letters

bool valid(int k, string s, unordered_map<char, int> a){
    int n = s.size();

    unordered_map<char, int> b; 

    int l = 0, r = 0;

    int distinct = 0; 

    while (r < n){
        if (b[s[r]] == 0){
            distinct++; 
        }

        b[s[r]]++;

        if (r - l + 1 > k){
            if (b[s[l]] == 1){
                distinct--;
            }

            b[s[l]]--;
            l++;
        }

        r++; 

        if (distinct == a.size()){
            return true; 
        }
    }

    return false;
}

/*
Faster solution would be O(n) two pointer solution where u increment right until the 
window is a valid window and you start decrementing left until it becomes invalid
*/

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int l = 1, r = n; 

    unordered_map<char, int> a; 

    for (int i = 0; i < n; i++){
        if (a[s[i]] == 0){
            a[s[i]]++; 
        }
    }

    int ans;

    while (l <= r){
        int mid = l + (r - l) / 2; 

        if (valid(mid, s, a)){
            r = mid - 1;
            ans = mid;
        } else {
            l = mid + 1; 
        }
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}