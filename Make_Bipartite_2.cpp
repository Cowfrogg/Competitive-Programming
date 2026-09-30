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

void fast_io()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

const int NMAX = 1e6;

ll n, m;
vector<vector<ll>> graph(NMAX);
vector<ll> color(NMAX, -1);
queue<ll> q;

ll bfs(int start)
{
    ll rcount = 1, bcount = 0;

    q.push(start);

    color[start] = 0;

    while (!q.empty())
    {
        ll v = q.front();

        q.pop();

        for (ll u : graph[v])
        {
            if (color[u] == -1)
            {
                color[u] = 1 - color[v];
                q.push(u);

                if (color[u] == 0)
                {
                    rcount++;
                }
                else
                {
                    bcount++;
                }
            }
            else if (color[u] == color[v])
            {
                return -1;
            }
        }
    }

    ll current = (rcount * (rcount - 1) / 2) + (bcount * (bcount - 1) / 2);

    return current;
}

void solve()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;

        u--, v--;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    ll ans = (n * (n - 1) / 2);

    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            ll current = bfs(i);

            if (current == -1)
            {
                cout << 0 << endl;
                return;
            }

            ans -= current;
        }
    }

    cout << ans - m << endl;
}

int main()
{
    fast_io();

    solve();

    return 0;
}