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
    function<int(string, char, char)> count = [&](string str, char x, char y) {
        int count = 0;
        for (int i = 0; i < n - 1; ++ i) {
            if (i % 2 == 0) {
                if (str[i] != x) {
                    count ++;
                    str[i + 1] = (str[i + 1] == x) ? y : x;
                } 
            } else {
                if (str[i] != y) {
                    count ++;
                    str[i + 1] = (str[i + 1] == y) ? x : y;
                }
            }
        }
        if (n % 2 == 0 && str[n - 1] == y) return count;
        if (n % 2 == 1 && str[n - 1] == x) return count;
        return -1;
    };
    int a = count(s, '0', '1');
    int b = count(s, '1', '0');
    if (a == -1 && b == -1) {
        cout << -1 << endl;
    } else if (a == -1) {
        cout << b << endl;
    } else if (b == -1) {
        cout << a << endl;
    } else {
        cout << min(a, b) << endl;
    }
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