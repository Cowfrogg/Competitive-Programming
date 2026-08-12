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

bool valid(ll x, ll k, vector<ll>& a){
    ll sum = 0, count = 1;

    for (int i = 0; i < a.size(); i++){
        sum += a[i];

        if (a[i] > x){
            return false;
        }

        if (sum > x){
            sum = a[i];
            count++;
        }
    }

    return count <= k; 
}

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);

    ll r = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i]; 

        r += a[i]; 
    }

    ll l = 0;
    ll mid, ans = r;

    while (l <= r){
        mid = l + (r - l) / 2;

        if (valid(mid, k, a)){
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