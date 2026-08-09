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

// DSU

void dsu_initializer(int n, vector<int>& parent){
    for (int i = 0; i < n; i++){
        parent[i] = i;
    }
}

int find(int x, vector<int>& parent){
    if (parent[x] == x){
        return x;
    }

    return parent[x] = find(parent[x], parent); 
}

bool unite(int a, int b, vector<int>& parent, vector<int> size){
    a = find(a, parent);
    b = find(b, parent); 

    if (a == b){
        return false; 
    }

    if (size[a] < size[b]){
        swap(a, b);
    }

    parent[b] = a;
    size[a] += size[b];

    return true;
}

bool same(int a, int b, vector<int> parent){
    return find(a, parent) == find(b, parent); 
}

void solve(){
    int n;
    vector<int> parent(n); 
    vector<int> size(n, 1); 

    
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}