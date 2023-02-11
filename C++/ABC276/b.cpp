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
    ll n, m; cin >> n >> m;
    vector<set<ll>> vec(n+1, set<ll>());
    REP(i, m) {
        ll a, b; cin >> a >> b;
        vec[a].insert(b);
        vec[b].insert(a);
    }
    REP2(i, 1, n+1) {
        cout << vec[i].size();
        for(auto itr = vec[i].begin(); itr != vec[i].end(); itr++) {
            cout << ' ' << *itr;
        }
        cout << endl;
    }
    return 0;
}

