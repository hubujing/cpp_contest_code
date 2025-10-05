#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pb push_back
#define x first
#define y second
#define endl '\n'
#define all(v) v.begin(), v.end()
#define debug(x) cerr << #x << ": " << x << endl
#define INF 0x3f3f3f3f3f3f3f3f

const int mod = 1e9 + 7;
const int N = 1e5 + 10;
void solve() {
    int n, m;cin >> n >> m;
    int ti = 0, tj = 0;
    int ans = 0;
    while (n --) {
        // cerr << ti << " " << tj << endl;
        int a, b; cin >> a >> b;
        if ((a - ti) % 2 && tj != b) ans += a - ti;
        else if ((a - ti) % 2 && tj == b) ans += a - ti - 1;
        else if ((a - ti) % 2 == 0 && tj != b) ans += a - ti - 1;
        else ans += a - ti;
        ti = a, tj = b;
    }
    if (ti != m) ans += (m - ti);
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin >> t;
    while (t --) {
        solve();
    }
    return 0;
}