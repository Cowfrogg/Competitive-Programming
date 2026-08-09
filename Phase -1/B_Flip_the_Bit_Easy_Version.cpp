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
    /*
    Idea:

    Two loops, one for each side of special indexes
    when meet != special index, have a count++ and ans++
    if final count % 2 == 1 ans++ once more
    I think that is it
    
    
    */

    int n, k;
    cin >> n >> k;

    vector<int>a(n); 

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int p;
    cin >> p;

    p--;

    int target;

    for (int i = 0; i < n; i++){
        if (i == p){
            target = a[i];
        }
    }

    int ans = 0, count = 0;

    for (int i = p; i < n; i++){
        if(a[i] != target){
            count++; 
            ans++;
        }
    }

    for (int i = 0; i < p + 1; i++){
        if(a[i] != target){
            count++;
            ans++; 
        }
    }

    if (count % 2 == 1){
        ans++; 
    }

    cout << ans << endl; 

}
 
int main(){
    fast_io();  
 
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}