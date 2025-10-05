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
    int t;cin >> t;
    vector<int> a;
    int q = 1;
    while ((q + 1) * q / 2 <= 2 * N) {
        a.push_back(q * (q + 1) / 2);
        q ++;
    }

    while (t --) {
        int n;cin >> n;
    }
    return 0;
}