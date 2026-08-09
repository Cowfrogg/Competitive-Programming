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
    ll n, q; 
    cin >> n >> q;

    vector<ll> a(n); 

    for (ll i = 0; i < n; i++){
        cin >> a[i]; 
    }

    vector<ll> cnt(n + 1, 0);

    for (ll i = 0; i < q; i++){
        ll l, r;
        cin >> l >> r;

        l--, r--;

        cnt[l]++;
        cnt[r + 1]--;
    }

    for (ll i = 1; i < n; i++){
        cnt[i] += cnt[i - 1]; 
    }

    cnt.resize(n); 

    sort(cnt.rbegin(), cnt.rend());

    sort(a.rbegin(), a.rend()); 

    ll total = 0;

    for (ll i = 0; i < n; i++){
        total += cnt[i] * a[i];
    }

    cout << total << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}