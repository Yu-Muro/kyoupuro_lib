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

int main() {
    string s; cin >> s;
    int l = s.size();
    int ans = -1;
    REP(i, l+1) {
        REP2(j, i+1, l+1) {
            string t= s.substr(i, j);
            string u = s.substr(i, j); reverse(all(u));
            if(t == u) ans = max(ans, (int)u.size());
        }
    }
    cout << ans << endl;
    return 0;
}
