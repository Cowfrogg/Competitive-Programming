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

void CoordinateCompression(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    vector<int> c = a;

    sort(c.begin(), c.end()); 

    c.erase(unique(c.begin(), c.end()), c.end()); 

    // can also create a vector<int> ans and push the idx into it

    vector<int> ans;

    for (int i = 0; i < n; i++){
        int idx = lower_bound(c.begin(), c.end(), a[i]) - c.begin();

        ans.push_back(idx); 

        cout << idx; 
    }

    cout << endl; 

    for (auto it : ans){
        cout << it << endl;
    }
}

int main(){
    fast_io();

    CoordinateCompression(); 
    
    return 0;
}