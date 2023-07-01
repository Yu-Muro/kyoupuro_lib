#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mp make_pair
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pll pair<ll, ll>
#define vecll vector<ll>
#define vecll2 vector<vecll>
#define vecld vector<ld>
#define vecld2 vector<vecld>
#define REP(i, n) for (ll i = 0; i < n; ++i)
#define REPD(i, n) for (ll i = n; i > 0; --i)
#define REP2(i, a, b) for (ll i = a; i < b; ++i)
#define REPD2(i, a, b) for (ll i = a; i > b; --i)
#define printd(a, n) cout << std::fixed << std::setprecision(n) << a << endl

vecll calc_divisor(ll n) {
    vecll res;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i != 0) continue;
        res.pb(i);
        if (n / i != i) res.pb(n / i);
    }
    sort(all(res));
    return res;
}

int main() {
    ll n;
    cin >> n;
    auto ans = calc_divisor(n);
    cout << ans.size() << endl;
    return 0;
}
