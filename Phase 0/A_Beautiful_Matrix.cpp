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
    int posx, posy;

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            int num; 
            cin >> num;

            if (num == 1){
                posx = i;
                posy = j;
            }
        }
    }

    cout << abs(posx - 3) + abs(posy - 3) << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}