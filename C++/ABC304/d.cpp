#include <bits/stdc++.h>
using namespace std;
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
    int w, h; cin >> w >> h;
    int n; cin >> n;
    int m = n+1;
    int M = -1;
    set<pair<int, int>> ichigo;
    REP(i, n) {
        int y, x; cin >> y >> x;
        auto p = mp(--x, --y);
        ichigo.insert(p);
    }
    int a; cin >> a;
    vector<int> a_list(a+2);
    a_list[0] = 0;
    a_list[a+1] = w;
    REP(i, a) {
        int t; cin >> t; t--;
        a_list[i+1] = t;
    }
    int b; cin >> b;
    vector<int> b_list(b+2);
    b_list[0] = 0;
    b_list[b+1] = h;
    REP(i, b) {
        int t; cin >> t; t--;
        b_list[i+1] = t;
    }
    REP(i, a+1) {
        REP(j, b+1) {
            int left = a_list[i];
            int right = a_list[i+1];
            int top = b_list[j];
            int down = b_list[j+1];
            int cnt = 0;
            REP2(s, left, right) {
                REP2(t, top, down) {
                    auto now = mp(s, t);
                    if(ichigo.find(now) != ichigo.end()) cnt++;
                }
            }
            m = min(cnt, m);
            M = max(cnt, M);
        }
    }
    cout << m << ' ' << M << endl;
    return 0;
}
