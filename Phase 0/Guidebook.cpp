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

    vector<tuple<string, int, int>> v(n);

    for (int i = 0; i < n; i++){
        string first;
        int second;
        cin >> first >> second;

        int third = i + 1;

        v[i] = {first, second, third};
    }

    sort(v.begin(), v.end(), [](const tuple<string, int, int>& a, const tuple<string, int, int>& b){
        auto [a1, a2, a3] = a;
        auto [b1, b2, b3] = b;

        if (a1 != b1) return a1 < b1;

        return a2 > b2;
    });

    for (const auto& [first, second, third] : v){
        cout << third << endl; 
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}