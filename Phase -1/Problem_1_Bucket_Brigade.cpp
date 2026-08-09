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
    int bucketx, buckety, lakex, lakey;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            char s;
            cin >> s;

            if (s == 'B'){
                bucketx = j;
                buckety = i;
            }
            if ( s== 'L'){
                lakex = j;
                lakey = i;
            }
        }
    }

    int ans = abs(bucketx - lakex) + abs(buckety - lakey) - 1;

    cout << ans << endl; 
}
 
int main(){
    fast_io();  
 
    solve();
    
    return 0;
}