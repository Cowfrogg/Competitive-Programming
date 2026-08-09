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

/*
Problem statement:
-Compute the number of good sequences from a sequence b
-A sequence is considered good if there exists a coloring of each index i in red or blue 
such that for every pair of indices i < j with bi > bj, the colors assigned to i and j
are different
-Given sequence a of size n, n <= 300

Redefinition of the problem : 
-Two coloring means the sequence can be seen as a bipartite graph
-There is an edge connecting two nodes if i < j and bi > bj
-i < j and bi > bj is called an inversion, because the values are descending
-By definition, a bipartite graph must have even cycles, meaning if you start from a 
node of color red, it must end up back to a node of color red
-Thus, to check if the graph is two colorable, we have to check if a node is connected to more 
than one node, i.e. odd cycle of length 3
-In conclusion, a subsequence is good if it doesn't have decreasing subsequence greater than 2
i.e. the longest decreasing subsequence is < 2

Approach to the problem : 
-Now, to check if each subsequence is bipartite one by one would be impossible because it would
result in O(N^300), given that n <= 300
-Since the DP will depend on the comparison between elements in the array, we'll have to perform
a rank transformation by creating a copy of the array, and iterating over all elements.
-Compare each element by every other elements of the array. a[i] is set to 1 by default, and 
is incremented whenever b[i] <= b[j] if it's before a[i], and b[i] < b[j]
-In this case, we can use DP to check the number of good subsequences that can be formed up
to a[i]
-We will have two DP tables, one recording the number of good subsequences formed to a[i - 1],
and another one recording the number of good subsequences formed to a[i]
-We will keep in track of the greatest and second greatest value encountered
-The reason we are keeping track of them is because 
-The DP state is as follows : 
DP[previous][greatest value encountered][second greatest value encountered]
DP[current][greatest value encountered][second greatest value encountered]

The base case is DP[0][0][0] = 1, because an empty graph has no odd cycle, thus it is a good
subsequence

*/

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int NMAX = 3000;

int n, m, mp;

int a[NMAX + 5], b[NMAX + 5];

int dp[2][NMAX + 5][NMAX + 5];

void addself(int &x, int y){
    x += y;

    if (x >= MOD){
        x -= MOD;
    }
}

void solve(){
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }

    for (int i = 1; i <= n; i++){
        a[i] = 1;

        for (int j = 1; j < i; j++){
            if (b[j] <= b[i]){
                a[i]++;
            }
        }

        for (int j = i + 1; j <= n; j++){
            if (b[j] < b[i]){
                a[i]++;
            }
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j <= n; j++){
            for (int q = 0; q <= n; q++){
                dp[i][j][q] = 0;
            }
        }
    }

    int cr = 0; 
    dp[0][0][0] = 1; 

    for (int i = 1; i <= n; i++){
        cr ^= 1;

        int x = a[i];

        for (int j = 0; j <= n; j++){
            for (int q = 0; q <= n; q++){
                dp[cr][j][q] = dp[cr ^ 1][j][q];
            }
        }

        for (int j = 0; j <= n; j++){        // comapre x to m and mp, j is m (greatest), q is mp (second greatest)
            for (int q = 0; q <= j; q++){    // since q must be smaller than m, q only has to iterate to j;
                if (dp[cr ^ 1][j][q] == 0){
                    continue;  
                }
                if (j > x && x > q){
                    addself(dp[cr][j][x], dp[cr ^ 1][j][q]);
                } else if (x > j) {
                    addself(dp[cr][x][q], dp[cr ^ 1][j][q]);
                }
            }
        }
    }

    int sum = 0;

    for (int j = 0; j <= n; j++){
        for (int q = 0; q <= n; q++){
            addself(sum, dp[cr][j][q]); 
        }
    }

    cout << sum << endl;
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