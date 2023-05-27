#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
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
#define printd(a, n) cout << fixed << setprecision(n) << a << endl
#define inputvec(v) for (ull i = 0; i < v.size(); ++i) cin >> v[i]
#define pbllvec(v, n) for (ull i = 0; i < n; i++) {ll temp; cin >> temp; v.pb(temp);}
#define printvec(v) cout << v[0]; for (ull i = 0; i < v.size() - 1; ++i) cout << ' ' << v[i + 1]; cout << endl;
#define printset(v) auto itr = (v).begin(); cout << *itr; itr++; for (; itr != (v).end(); itr++) cout << ' ' << *itr; cout << endl;

int main() {
    ll n;
    cin >> n;
    vecll c1(n + 1, 0), c2(n + 1, 0);
    REP(i, n) {
        int c, x;
        cin >> c >> x;
        if (c == 1) {
            c1[i + 1] = c1[i] + x;
            c2[i + 1] = c2[i];
        } else {
            c1[i + 1] = c1[i];
            c2[i + 1] = c2[i] + x;
        }
    }
    ll q;
    cin >> q;
    REP(i, q) {
        ll x, y;
        cin >> x >> y;
        cout << c1[y] - c1[x - 1] << ' ';
        cout << c2[y] - c2[x - 1] << endl;
    }
    return 0;
}
