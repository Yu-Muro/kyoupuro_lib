#include <bits/stdc++.h>
#include <atcoder/all>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>
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

boost::mt19937 engine;

int random_gen(int low, int high) {
    boost::uniform_int<> dist(low, high);
    boost::variate_generator<boost::mt19937&, boost::uniform_int<>> vgen(engine, dist);
    return vgen();
}

int main() {
    int n = 30;
    vector<vector<int>> vec(n, vector<int>());
    REP(i, n) {
        REP(j, i+1) {
            ll t; cin >> t;
            vec[i].pb(t);
        }
    }
    bool flag = false;
    vector<vector<int>> ans;
    do {
        flag = false;
        REP2(i, 1, n) {
            REP(j, i+1) {
                int c = 0;
                if(vec[i-1][j] > vec[i][j]) c++;
                if(j-1 >= 0 && vec[i-1][j-1] > vec[i][j]) c += 2;
                if(c > 0) flag = true;
                if(c == 3) c = random_gen(1, 2);
                if(c == 1) {
                    vector<int> x = {i-1, j, i, j};
                    ans.pb(x);
                    int temp = vec[i - 1][j];
                    vec[i - 1][j] = vec[i][j];
                    vec[i][j] = temp;
                } else if(c == 2) {
                    vector<int> x = {i - 1, j - 1, i, j};
                    ans.pb(x);
                    int temp      = vec[i - 1][j - 1];
                    vec[i - 1][j - 1] = vec[i][j];
                    vec[i][j]     = temp;
                }
            }
        }
    } while(flag);
    cout << ans.size() << endl;
    REP(i, ans.size()) {
        cout << ans[i][0] << ' ' << ans[i][1] << ' ' << ans[i][2] << ' ' << ans[i][3] << endl;
    }
    return 0;
}
