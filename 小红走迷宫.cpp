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
const int N = 1e6 + 10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, x;cin >> n >> m >> x;
    vector<int> q[N];
    map<int, int> mp;
    for (int i = 0; i < x; ++ i) {
        int a;cin >> a;
        mp[a] = 1;
    }
    for (int i = 0; i < m; ++ i) {
        int u, v;cin >> u >> v;
        if (mp[u] || mp[v]) continue;
        q[u].pb(v);
        q[v].pb(u);
    }
    queue<int> qi;
    qi.push(1);
    vector<int> ans;
    while (!qi.empty()) {
        int t = qi.front();
        qi.pop();
        ans.pb(t);
        for (auto i : q[t]) {
            if (mp[i]) continue;
            mp[i] = 1;
            qi.push(i);
        }
    }
    sort(all(ans));
    for (auto i : ans) cout << i << " ";
    return 0;
}