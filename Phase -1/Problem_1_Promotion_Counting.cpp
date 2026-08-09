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
    int bb, ba, sb, sa, gb, ga, plb, pla;
    cin >> bb >> ba >> sb >> sa >> gb >> ga >> plb >> pla;

    int ans1 = pla - plb, ans2 = ga - gb + ans1, ans3 = sa - sb + ans2;

    cout << ans3 << endl << ans2 << endl << ans1 << endl;
}
 
int main(){
    fast_io();  
 
    solve();
    
    return 0;
}