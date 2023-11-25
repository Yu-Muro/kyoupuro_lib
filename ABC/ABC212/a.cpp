#include <bits/stdc++.h>
using namespace std;
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
    int a, b; cin >> a >> b;
    string ans = "";
    if(a + b == a) ans = "Gold";
    else if(a + b == b) ans = "Silver";
    else ans = "Alloy";
    cout << ans << endl;
    return 0;
}
