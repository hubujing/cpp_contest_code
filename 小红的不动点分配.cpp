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
    int n;cin >> n;
    int q[n * 2];
    for (int i = 0; i < n * 2; i++) {
        cin >> q[i];
    }
    sort(q, q + n * 2);
    int l = 1, r = 1;
    int ans = 0;
    for (int i = 0; i < n * 2; i += 2) {
        if (q[i] == l) {
            ++ ans, ++ l;
        }
        if (q[i + 1] == r) {
            ++ ans, ++ r;
        }
    }
    cout << ans << endl;
    return 0;
}