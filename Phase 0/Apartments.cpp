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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n); 
    vector<int> b(m);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    int i = 0, j = 0;

    int ans = 0;

    while (i < n && j < m){
        if (abs(a[i] - b[j]) <= k){
            i++;
            j++;
            ans++;
            continue;
        }

        if (a[i] > b[j]){
            j++; 
        } else {
            i++; 
        }
    }


    cout << ans << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}