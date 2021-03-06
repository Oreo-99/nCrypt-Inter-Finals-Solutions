#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
using vi = vector<int>;
using vs = vector<string>;
using vb = vector<bool>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;
using vpii = vector<pair<int, int>>;
using si = set<int>;
using mii = map<int, int>;
template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define sz(x) (int)size(x)
#define pb emplace_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define fr first
#define sc second
#define f(i, end) for (int i = 0; i < end; i++)
#define ff(i, start, end) for (int i = start; i < end; i++)
template<typename T, typename U> inline void domin(T &x, U y) {if (y < x) x = y;}
template<typename T, typename U> inline void domax(T &x, U y) {if (y > x) x = y;}
template<typename T, typename U> ostream& operator<<(ostream &os, const pair<T, U> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template < typename T_container, typename T = typename enable_if < !is_same<T_container, string>::value, typename T_container::value_type >::type > ostream & operator<<(ostream &os, const T_container &a) { os << '{'; string sep; for (const T &x : a) os << sep << x, sep = ", "; return os << '}';}
void debug() {cerr << endl;}
template <typename Head, typename... Tail> void debug(Head h, Tail... t) {cerr << h << ' '; debug(t...);}
#ifdef singlabharat
#define debug(...) cerr << "(" << #__VA_ARGS__ << ") : ", debug(__VA_ARGS__)
#else
#define debug(...)
#endif
#define endl '\n'
const vector<pair<int, int>> dirs = {{ -1, 0}, {0, 1}, {1, 0}, {0, -1}};
const int MX = 2e5 + 2, MOD = 1e9 + 7, MOD2 = 998244353, INF = 1e18;

void solve() {

    string s;
    cin >> s;
    stack<char> st;
    int ans = 0;
    for (char c : s) {
        if (!empty(st) and st.top() == c) {
            st.pop();
            ans++;
        }
        else st.push(c);
    }
    cout << ans << endl;
}

int32_t main() {

#ifdef singlabharat
    freopen("error.txt", "w", stderr);
#endif

    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    cin >> t;

    for (int tc = 0; tc < t; tc++) solve();
}
