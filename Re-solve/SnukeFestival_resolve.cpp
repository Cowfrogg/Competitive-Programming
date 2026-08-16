#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vll vector<ll>
#define pii pair<ll, ll>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define F first
#define S second
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const long long LINF = 4e18;

void fast_io()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n), b(n), c(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    // Number of combinations such that a[i] < b[i] < c[i]

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ll acount = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        ll ccount = c.end() - upper_bound(c.begin(), c.end(), b[i]);

        ans += acount * ccount;
    }

    cout << ans << endl;
}

main()
{
    fast_io();

    solve();

    return 0;
}