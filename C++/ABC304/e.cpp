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
    int n, m; cin >> n >> m;
    dsu d(n+1);
    REP(i, m) {
        int u, v; cin >> u >> v;
        d.merge(u, v);
    }
    int k; cin >> k;
    set<pair<int, int>> vec;
    REP(i, k) {
        int x, y; cin >> x >> y;
        pair<int, int> z = mp(d.leader(x), d.leader(y));
        vec.insert(z);
    }
    int t; cin >> t;
    REP(ii, t) {
        int p, q; cin >> p >> q;
        pair<int, int> r = mp(d.leader(p), d.leader(q));
        if(vec.find(r) != vec.end()) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
