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
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
void solve() {
    int n, k;cin >> n >> k;
    int q[n];
    for (int i = 0; i < n; ++ i)
        cin >> q[i];
    if (gcd(n, k) == 1) {
        cout << 0 << endl;
        return;
    }
    
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