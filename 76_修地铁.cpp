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
    int a = 0, b = 0, c = 0, d = 0;
    a += (n) / 5 * 2;
    b = (n + 5) / 10;
    c = n / 20 * 3;
    d += n * 2 - c / 3 * 2;
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}