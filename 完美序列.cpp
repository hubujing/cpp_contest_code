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
    int q[n];
    map<int, int> mp;
    int imax = INT_MIN;
    for (int i = 0; i < n; ++ i) {
        cin >> q[i];
        mp[q[i]] ++;
        imax = max(imax, q[i]);
    }
    int ans = 0;
    for (int i = 1; i <= imax * 2; ++ i) {
        int cnt = 0;
        for (int j = 1; j <= imax; ++ j) {
            if (j > i - j) break;
            if (mp[j] && mp[i - j]) {
                cnt += min(mp[j], mp[i - j]);
            }
        }
        debug(i);
        debug(cnt);
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}