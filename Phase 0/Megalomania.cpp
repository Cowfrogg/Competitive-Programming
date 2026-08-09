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

// Greedy solution: Sort the jobs in deadline and check if time has passed deadline of job[i]

// Greedy Proof
/*

Let X and Y be events where Dy < Dx and Ax and Ay are the times needed to complete the event. 

The initial solution would be X -> Y

Let T be the starting time

The time at which X finishes is T + Ax
The time at which Y finishes is T + Ax + Ay

Since it is a valid solution,
T + Ax + Ay <= Dy

If we swap this into the greedy solution,
The solution becomes Y -> X

The time at which X finishes becomes T + Ay + Ax
The time at which Y finishes becomes T + Ax

T + Ax <= T + Ax + Ay
Thus
T + Ax <= Dy

and since the finish time of X has become Dy, and
Dy < Dx

T + Ay + Ax < Dx

Both conditions are satisfied thus the greedy solution is valid.

*/

void solve(){
    int n;
    cin >> n;

    vector<pair<int, int>> p(n); 

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        p[i] = {a, b};
    }

    sort(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    });

    int time = 0;

    for (int i = 0; i < n; i++){
        auto [a, b] = p[i]; 
        time += a;

        if (time > b){
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

int main(){
    fast_io();
    
    solve();
    
    return 0;
}