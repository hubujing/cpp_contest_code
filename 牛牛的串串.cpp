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
        string s;cin >> s;
        int q[26] = {0};
        for (auto i : s) {
            q[i - 'a'] ++;
        }
        sort(q, q + 26);
        for (int i = 0; i < 26; ++ i) {
            if (q[i] == 0 || q[i - 1] == 0) continue;
            if (q[i] - q[i - 1] != 1) {
                cout << "NO" << endl;
                return ;
            }
        }
        cout << "YES" << endl;
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