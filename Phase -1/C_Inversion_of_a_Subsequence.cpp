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

void fast_io()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int N = 10e5 + 1;
const double PI = 3.14159265358979323846264338327950288419716939937510;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        cin >> b[i]; 
    }

    int sum = 0;

    for (int i = 0; i < n; i++){
        if (a[i] != b[i]){
            sum += a[i]; 
        }
    }

    if (a == b){
        cout << 0 << endl; 
        return;
    }

    if (accumulate(a.begin(), a.end(), 0) == 0 || accumulate(b.begin(), b.end(), 0) == n){
        cout << -1 << endl ;
        return; 
    }

    cout << (sum % 2 == 1 ? 1 : 2) << endl; 
}

int main()
{
    fast_io();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}