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

    vector<ll> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<ll> pref(n), suf(n + 1);

    pref[0] = abs(a[0]);

    for (int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + abs(a[i]);
    }

    suf[n - 1] = a[n - 1];

    for (int i = n - 2; i >= 0; i--){
        suf[i] = suf[i + 1] + a[i];
    }

    ll best = suf[0];
    int idx = -1;

    for (int i = 1; i < n; i++){
        if (a[i] > 0){

            ll cur = pref[i - 1] + suf[i + 1] - a[i];

            if (cur > best){
                best = cur;
                idx = i;
            }
        }
    }

    if (idx == -1){
        cout << 0 << endl; 
        return;
    }

    vector<ll> b;

    for (int i = idx - 1; i >= 0; i--){
        if(b.size() % 2 == 1){
            a[i] = -a[i];
        }
        if(a[i] > 0){
            b.push_back(i);
        }
    }

    b.push_back(idx);

    cout << b.size() << endl;

    for (auto it : b){
        cout << it + 1 << " ";
    }

    cout << endl;
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