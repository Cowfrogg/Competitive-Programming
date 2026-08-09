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

vector<int> parent;
vector<int> sz;
int n, m;

int find(int x){
    if (parent[x] == x){
        return x;
    }

    return parent[x] = find(parent[x]); 
}

void solve(){
    cin >> n >> m; 

    parent.resize(n);
    sz.assign(n, 1); 

    for (int i = 0; i < n; i++){
        parent[i] = i; 
    }

    int components = n;
    int largest = 1;

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        a--;
        b--; 

        int ra = find(a);
        int rb = find(b); 

        if (ra != rb){
            components--;

            if (sz[ra] < sz[rb]){
                swap(ra, rb);
            }

            parent[rb] = ra;
            sz[ra] += sz[rb];

            largest = max(largest, sz[ra]);
        }

        cout << components << " " << largest << endl; 
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}