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

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    vector<ll> tags(n + 1); 

    for (int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;

        a--, b--; 

        tags[a]++;
        tags[b + 1]--; 
    }

    for (int i = 1; i < n; i++){
        tags[i] = tags[i - 1] + tags[i]; 
    }

    sort(tags.rbegin(), tags.rend()); 
    sort(a.rbegin(), a.rend()); 

    ll ans = 0; 

    for (int i = 0; i < n; i++){
        ans += tags[i] * a[i];
    }

    cout << ans << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}