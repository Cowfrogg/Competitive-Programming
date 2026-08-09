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

bool valid(long long n, long long x, vector<long long>& h, vector<long long>& s){
    vector<long long> d(n);

    for (int i = 0; i < n; i++){
        if (x < h[i]) return false; 
        d[i] = floor((x - h[i]) / s[i]);
    }

    sort(d.begin(), d.end());

    for (long long i = 0; i < n; i++){
        if (d[i] < i){
            return false; 
        }
    }

    return true; 
}

void solve(){
    long long n;
    cin >> n;

    vector<long long> h(n), s(n);

    long long l = 0;
    long long r; 

    for (long long i = 0; i < n; i++){
        cin >> h[i] >> s[i]; 

        r = max(r, h[i] + s[i] * (n - 1));
    }

    long long ans;

    while (l <= r){
        long long mid = l + (r - l) / 2;

        if (valid(n, mid, h, s)){
            ans = mid; 
            r = mid - 1;
        } else {
            l = mid + 1; 
        }
    }

    cout << ans << endl; 
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}