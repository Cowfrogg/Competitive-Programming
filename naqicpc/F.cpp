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

    int one = 0, two = 0, three = 0, four = 0;

    for (int i = 0; i < n; i++){
        int num;
        cin >> num;

        if (num >= 1 && num <= 10){
            one = 1;
        }
        if (num >= 11 && num <= 20){
            two = 1; 
        }
        if (num >= 21 && num <= 30){
            three = 1; 
        }
        if (num >= 31 && num <= 40){
            four = 1;
        }
    }

    int ans = one + two + three + four;

    cout << ans << endl;
}

int main(){
    fast_io();
    
    int t;
    cin >> t;

    while (t--){
        solve(); 
    }
    
    return 0;
}