#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (ll i = 0; i < n; ++i)

int main() {
    int n;
    cin >> n;
    int ans = 0;
    REP(i, n) {
        int a;
        cin >> a;
        ans += a;
        ans %= 100;
    }
    cout << ans << endl;
    return 0;
}