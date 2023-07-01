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
    ll n, d; cin >> n >> d;
    vecll x(n); vecll y(n);
    REP(i, n) cin >> x[i] >> y[i];
    vector<int> vec(n, 0); vec[0] = 1;
    queue<int> a; a.push(0);
    while(!a.empty()) {
        ll now = a.front();
        a.pop();
        REP(i, n) {
            if(now == i) continue;
            if(vec[i]) continue;
            ll dist = (x[i] - x[now]) * (x[i] - x[now]) + (y[i] - y[now]) * (y[i] - y[now]);
            if(dist <= d*d) {
                vec[i] = 1;
                a.push(i);
            }
        }
    }
    REP(i, n) {
        if(vec[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
