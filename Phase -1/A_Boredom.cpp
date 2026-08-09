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

ll a[100005], b[100005], ans[100005];

void solve(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
    }

    ans[1] = b[1];
    
    for (int i = 2; i <= 100005; i++){
        ans[i] = max(ans[i - 1], b[i] * i + ans[i - 2]);
    }

    cout << ans[100005] << endl; 
}

int main(){
    fast_io();

    solve();

    return 0;
}