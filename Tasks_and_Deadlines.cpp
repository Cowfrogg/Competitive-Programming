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

/*
Solution:
Process by task with the shortest process times

Proof:
Exchange argument

We want to minimize score S

Given that we have event A and event B where pA > pB, and A happens before B

t is the time that has passed before these two events

SA = t + pA
SB = t + pA + pB

S = 2t + 2pA + pB

If we swapped A and B

SB' = t + pB
SA' = t + pB + pA

S' = 2t + 2pB + pA

delta S = S'(new) - S(old)
        = pB - pA
        < 0
        since pA > pB

since delta S is negative, we have a decrease in the score.
*/

void solve(){
    int n;
    cin >> n;

    vector<pair<ll, ll>> p(n); 

    for (int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second; 
    }

    sort(p.begin(), p.end());

    ll score = 0, time = 0;

    for (int i = 0; i < n; i++){
        time += p[i].first;

        score += p[i].second - time;
    }

    cout << score << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}