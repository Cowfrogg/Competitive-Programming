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
    int n;
    cin >> n;

    vector<int> a(n); 

    for (int i = 0; i < n; i++){
        int num;
        cin >> num;

        num--;

        a[i] = num; 
    }

    vector<int> b = a;

    sort(b.begin(), b.end());

    b.erase(unique(b.begin(), b.end()), b.end());

    for (int i = 0; i < n; i++){
        int curr = lower_bound(b.begin(), b.end(), a[i]) - b.begin();

        cout << curr << endl;
    }
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}