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
    int x, y, z; cin >> x >> y >> z;
    string s; cin >> s;
    pair<ll, bool> temp = mp(1 << 18, false);
    vector<vector<pair<ll, bool>>> vec(s.size() + 1, vector<pair<ll, bool>>(s.size() + 1, pair<ll, bool>(temp)));
    vec[0][0] = mp(0, false);
    REP2(i, 1, s.size()) {
        REP(j, i) {
            if(vec[i-1][j].second) {
                if(s[i-1] == 'a') {
                    if (vec[i][j].first > vec[i - 1][j].first + x) vec[i][j] = mp(vec[i - 1][j].first + x, vec[i][j].second);
                }
            }
        }
    }

    return 0;
}
