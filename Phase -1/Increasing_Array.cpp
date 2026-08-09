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
    int n;
    cin >> n;

    vector<int> a(n + 1);

    ll ans = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 1; i < n; i++){
        if (a[i] < a[i - 1]){
            ans += a[i - 1] - a[i];

            a[i] = a[i - 1];
        }
    }

    cout << ans;
}

int main(){
    fast_io();

    solve();

    return 0;
}