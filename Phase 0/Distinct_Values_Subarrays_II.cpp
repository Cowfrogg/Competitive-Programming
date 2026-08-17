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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    ll ans = 0;

    int l = 0;

    map<int, int> count;

    int distinct = 0;

    for (int r = 0; r < n; r++){
        if (count[a[r]] == 0){
            distinct++;
        }
        count[a[r]]++;

        while (distinct > k && l < r){
            if (count[a[l]] == 1){
                distinct--;
            }

            count[a[l]]--;

            l++;
        }

        ans += r - l + 1;
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}