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
    ll n; cin >> n;
    vecll vec(n); REP(i, n) cin >> vec[i];
    prev_permutation(all(vec));
    cout << vec[0];
    REP(i, n-1) cout << ' ' << vec[i+1];
    cout << endl;
    return 0;
}

