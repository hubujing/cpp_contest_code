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
    int n;cin >> n;
    int q[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    q[n] = q[0];
    int cnt = 0;
    for (int i = 1; i <= n; ++ i) {
        if (q[i] > q[i - 1]) {
            cnt++;
        }
    }
    cout << (cnt > 1 ? "NO" : "YES") << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;cin >> t;
    while(t --) {
        solve();
    }
    return 0;
}