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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<ll> cnt(m + 1);

    for (ll i = 0; i < n; i++){
        cnt[a[i]]++;
    }

    vector<ll> suff(m + 2);

    for (ll i = m; i >= 1; i--){
        suff[i] = suff[i + 1] + cnt[i];
    }

    vector<ll> ans(m + 1);

    for (ll i = 1; i <= m; i++){
        ll current = 0;

        ll k = 1;

        ll threshold = 1;

        for (ll j = 1; j * i <= m; j++){
            current += suff[j * i];

            if (j == threshold){

                long long temp = current;

                if ((j + 1) * i <= m)
                {
                    temp += cnt[(j + 1) * i];
                }

                ans[k] = max(ans[k], temp);

                k++;
                threshold = threshold * 2 + 1;
            }
        }

        if (k <= m) {
            ans[k] = max(ans[k], current);
        }
    }

    for (ll k = 2; k <= m; k++){
        ans[k] = max(ans[k], ans[k - 1]);
    }

    cout << ans[1];

    cout << endl;
}

int main()
{
    fast_io();

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}