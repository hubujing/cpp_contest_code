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
    string s;cin >> s;
    vector<int> a(n + 1, 0), b(n + 1, 0);
    for (int i = 1; i <= n; ++ i) {
        a[i] = a[i - 1] + (s[i - 1] == '1');
        b[i] = b[i - 1] + (s[i - 1] == '0');
    }
    int ans = INT_MAX;
    string s1 = "1010", s2 = "0101";
    for (int i = 0; i < n - 3; ++ i) {
        function<int(string, int)> count = [&] (string str, int t) {
            int cnt = 0, ti = 0;
            for (int j = t; j < t + 4; ++ j) {
                if (s[j] != str[ti ++]) {
                    cnt ++;
                }
            }
            return cnt;
        };
        int cnt1 = count(s1, i) + b[i] + (a[n] - a[i + 3]);
        int cnt2 = count(s2, i) + a[i] + (b[n] - b[i + 3]);
        ans = min(ans, min(cnt1, cnt2));
    }
    int cnt = 0, ti = 0;
    for (int i = 1; i < n; ++ i) {
        if (s[i] != s[i - 1]) {
            if (ti < 3) ti ++;
            else cnt ++, s[i + 1] = s[i];
        }
    }
    if (ti == 3) {
        cout << min(cnt, ans) << endl;
    } else cout << ans << endl;
    return 0;
}