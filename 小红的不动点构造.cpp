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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;cin >> n >> k;
    for (int n = 1; n <= 10; ++ n) {
        for (int k = 0; k <= n; ++ k) {
            cout << "n = " << n << ", k = " << k << ": ";
            vector<int> q;
            for (int i = 1; i <= k; ++ i) q.pb(i);
            for (int i = n; i > k; -- i) q.pb(i);
            int ans = 0;
            for (int i = 0; i < n; ++ i) {
                if (q[i] == i + 1) ++ ans;
            }
            for (int i : q) {
                cout << i << " ";
            }
            cout << endl;
            if (ans == k) {

            } else cout << -1 << endl;
        }
    }

    return 0;
}