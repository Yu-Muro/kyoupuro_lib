#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef long double ld;
#define mp make_pair
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pint pair<int, int>
#define plong pair<ll, ll>
#define vecint vector<int>
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
    vector<int> x(4);
    REP(i, 4) {
        char c; cin >> c;
        x[i] = int(c - '0');
    }
    if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) {
        cout << "Weak" << endl;
        return 0;
    }
    bool r = true;
    REP(i, 3) {
        if((x[i] + 1) % 10 != x[i+1]) r = false;
    }
    if(r) cout << "Weak" << endl;
    else cout << "Strong" << endl;
    return 0;
}
