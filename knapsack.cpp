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
    ll n, m; cin >> n >> m; // ボールの個数 n，重さの限界 m
    vecll weight(n), value(n); // i番目の重さ，価値
    REP(i, n) cin >> weight[i];
    REP(i, n) cin >> value[i];

    // (n+1) × (m+1) の配列を用意する
    // 配列全体を -1 で初期化する
    vecll2 dp(n + 1, vecll(m + 1, -1));

    // 初期条件
    // 0 個の品物は、重さ 0 で価値は 0
    dp[0][0] = 0;

    // 各品物を順に考慮していく (マス目を下へと更新していく)
    REP(i, n) {
        REP(j, m + 1) {
            // 最初の i 個の品物のみを用いて重さを j にすることが不可能の場合はスキップ
            if (dp[i][j] < 0) continue;

            // i 番目の品物を追加しない場合 (1 つ下のマスへ進む場合)
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);

            // i 番目の品物を追加する場合 (1 つ下、A[i] つ右のマスへ進む場合)
            if (j + weight[i] <= m) dp[i + 1][j + weight[i]] = max(dp[i + 1][j + weight[i]], dp[i][j] + value[i]);
        }
    }

    // 答え
    ll ans = -1;
    REP(j, m + 1) ans = max(ans, dp[n][j]);
    cout << ans << endl;
}
