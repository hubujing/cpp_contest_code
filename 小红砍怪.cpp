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
    int q[n * 2 + 1];
    map<int, int> mp;
    int ans = 0;
    for (int i = 1; i <= n * 2; i++)  {
        cin >> q[i];
        if (mp[q[i]]) {
            ans = max(ans, i - mp[q[i]] + 1);
        }
        mp[q[i]] = i;
    }
    cout << ans << endl;
    return 0;
}