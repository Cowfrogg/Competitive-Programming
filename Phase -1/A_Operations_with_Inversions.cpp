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

const ll INF = 1000000000000LL + 5;

// 5 6 7 3 3 1

// 5 5 5 5 5 6 2 2 7 1 

// 1 1 1 1 1 1 1 



// O(n^2) 
void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int c = 0; 

    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if (a[i] < a[j]){
                c++;
                break; 
            }
        }
    }

    cout << c << endl; 
}

// O(n)
void solve2(){
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int c = 0, m = 0;

    for (int i = 0; i < n; i++){
        if (m > a[i]){
            c++;
        } else{
            m = a[i];
        }
    }

    cout << c << endl;
}

int main(){
    fast_io();
    int t;
    cin >> t;

    while (t--){
        solve2();
    }

    return 0;
}