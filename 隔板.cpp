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

const int mod = 998244353;
const int N = 1e5 + 10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    if (m > n) {
        cout << 0 << endl;
        return 0;
    }
    long long dp[n+1][m+1];
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, m); j++) {
            if (j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i-1][j-1] % mod + dp[i-1][j] % mod) % mod;
        }
    }
    int ans = 1;
    for (int i = 1; i <= m; i++) {
        ans = (ans * i) % mod;
    }
    cout << ans * dp[n][m] % mod << endl;
    return 0;
}