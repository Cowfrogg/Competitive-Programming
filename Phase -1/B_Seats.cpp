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

    string s;
    cin >> s;

    int count = 0;

    for (char c : s){
        if (c == '1'){
            count++;
        }
    }

    for(int i = 0; i < n;) {

        if(s[i] == '1') {
            i++;
            continue;
        }

        int j = i;
        while(j < n && s[j] == '0')
            j++;

        int L = j - i;

        bool leftOne = (i-1 >= 0 && s[i-1] == '1');
        bool rightOne = (j < n && s[j] == '1');

        if(leftOne) L--;
        if(rightOne) L--;

        if(L > 0){
            count += (L + 2) / 3;
        }
        i = j;
    }


    cout << count << endl;
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