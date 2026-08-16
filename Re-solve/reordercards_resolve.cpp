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
    int h, w, n;
    cin >> h >> w >> n;

    vector<int> r(n); 
    vector<int> c(n); 

    for (int i = 0; i <  n; i++){
        cin >> r[i] >> c[i];
    }

    // Coordinate compression 

    vector<int> rtemp = r;
    vector<int> ctemp = c;

    sort(rtemp.begin(), rtemp.end());
    sort(ctemp.begin(), ctemp.end()); 

    rtemp.erase(unique(rtemp.begin(), rtemp.end()), rtemp.end());
    ctemp.erase(unique(ctemp.begin(), ctemp.end()), ctemp.end()); 

    for (int i = 0; i < n; i++){
        cout << lower_bound(rtemp.begin(), rtemp.end(), r[i]) - rtemp.begin() + 1<< " " << lower_bound(ctemp.begin(), ctemp.end(), c[i]) - ctemp.begin() + 1 << endl;
    }


}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}