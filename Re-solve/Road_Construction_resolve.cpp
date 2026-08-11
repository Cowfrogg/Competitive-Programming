#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vll vector<ll>
#define pii pair<ll, ll>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define F first
#define S second
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const long long LINF = 4e18;

void fast_io(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

ll n, m; 
vector<ll> parent;
vector<ll> sz; 

ll find(ll x, vector<ll>& parent){
    if (parent[x] == x){
        return x; 
    }

    return parent[x] = find(parent[x], parent); 
}

void solve(){
    cin >> n >> m;

    parent.resize(n); 
    sz.assign(n, 1);

    for (ll i = 0; i < n; i++){
        parent[i] = i; 
    }

    ll largest = 1;
    ll components = n; 

    for (ll i = 0; i < m; i++){
        ll a, b;
        cin >> a >> b;

        a--, b--; 

        ll ra = find(a, parent); 
        ll rb = find(b, parent); 

        if (ra != rb){
            if (sz[ra] < sz[rb]){
                swap(ra, rb); 
            }

            parent[rb] = ra; 
            sz[ra] += sz[rb];
            largest = max(largest, sz[ra]); 
            components--; 
        }

        cout << components << " " << largest << endl;
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}