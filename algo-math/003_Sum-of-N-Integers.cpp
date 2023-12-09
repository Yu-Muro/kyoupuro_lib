#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (ll i = 0; i < n; ++i)
#define REP2(i, a, b) for (ll i = a; i < b; ++i)

int main() {
    int n;
    cin >> n;
    int ans = 0;
    REP(i, n) {
        int a;
        cin >> a;
        ans += a;
    }
    cout << ans << endl;
    return 0;
}
