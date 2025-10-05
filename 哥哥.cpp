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
    int cnt = 0, a = 0;
    for (int i = 1; i < n; ++ i) {
        if (i < n - 1) {
            if (s[i] == s[i - 1] && s[i] == s[i + 1]) {
                ++ a;
            }
        }
        if (s[i] != s[i - 1]) {
            cnt ++;
        }
    }
    if (cnt >= 3) {
        cout << 0 << endl;
        return ;
    }
    if (a) {
        cout << 1 << endl;
        return ;
    }
    cout << 2 << endl;
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