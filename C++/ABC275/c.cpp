#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define mp make_pair
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pll pair<ll, ll>
#define vecll vector<ll>
#define vecll2 vector<vecll>
#define vecld vector<ld>
#define vecld2 vector<vecld>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define REPD(i, n) for(ll i = n; i > 0; --i)
#define REP2(i, a, b) for(ll i = a; i < b; ++i)
#define REPD2(i, a, b) for(ll i = a; i > b; --i)
#define fPrint(a, n) cout << std::fixed << std::setprecision(n) << a << endl


int main() {
    vector<pll> vec;
    int N = 9;
    REP(i, N) {
        string s; cin >> s;
        REP(j, N) {
            if(s[j] == '#') {
                vec.pb(mp(i + 1, j + 1));
            }
        }
    }
    ll len = vec.size(); ll ans = 0;
    REP(a, len) {
        REP(b, len) {
            if(a == b) continue;
            REP(c, len) {
                if(a == c || b == c) continue;
                REP(d, len) {
                    if(a == d || b == d || c == d) continue;
                    bool x = (ld)(vec[a].first + vec[b].first) / 2 == (ld)(vec[c].first + vec[d].first) / 2;
                    bool y = (ld)(vec[a].second + vec[b].second) / 2 == (ld)(vec[c].second + vec[d].second) / 2;
                    ll ab = (vec[b].first - vec[a].first) * (vec[b].first - vec[a].first) + (vec[b].second - vec[a].second) * (vec[b].second - vec[a].second);
                    ll cd = (vec[d].first - vec[c].first) * (vec[d].first - vec[c].first) + (vec[d].second - vec[c].second) * (vec[d].second - vec[c].second);
                    bool same = (ab == cd);
                    ll v_dot = 0;
                    v_dot += ((vec[b].first - vec[a].first) * (vec[d].first - vec[c].first));
                    v_dot += ((vec[b].second - vec[a].second) * (vec[d].second - vec[c].second));
                    if(x && y && same && v_dot == 0) ans++;
                }
            }
        }
    }
    cout << ans / 8 << endl;
    return 0;
}