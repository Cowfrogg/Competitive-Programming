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
    ll n;
    cin >> n;

    ll target = n*(n+1)/2; 

    if (target % 2 == 1){
        cout << "NO" << endl;
        return; 
    }

    cout << "YES" << endl;

    vector<int> a, b;

    target /= 2;

    for (ll i = n; i > 0; i--){
        if (i <= target){
            target -= i;

            a.push_back(i);
        } else {
            b.push_back(i); 
        }
    }

    cout << a.size() << endl;

    for (auto it : a){
        cout << it << " ";
    }

    cout << endl; 

    cout << b.size() << endl;

    for (auto it : b){
        cout << it << " ";
    }


}

int main(){
    fast_io();  

    solve();

    return 0;
}