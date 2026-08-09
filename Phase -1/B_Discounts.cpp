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
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<int> b(k);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < k; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;

    for (int i = 0; i < k; i++){
        int x = b[i];

        if ((int)a.size() < x){
            break;
        }

        ll gsum = 0, svalue = 0;

        for (int i = 0; i < x; i++){
            ll v = a.back();
            a.pop_back();

            gsum += v;
            svalue = v;
        }

        ans += gsum - svalue;
    }

    for (ll v : a){
        ans += v;
    }


    cout << ans << endl;

    // to be finished
    // solution will need to sort a, and involves wiht b[k] as if b[k] = 1, then a[n-1] = 0;
    // N.B a[n - 1] is same as b[n - b[k]]
    // probable solution : sort vector a, then for every b[i], set a[n - b[i]] = 0;
    // remember to iterate from 0 so that n - b[i] works
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