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
    string s1;cin >> s1;
    string s = "Kato_Shoko";
    map<char, int> mp;
    for (auto c : s1) mp[c]++;
    for (auto c : s) {
        if (mp[c] == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES " << s1.size() - s.size() << endl;
    return 0;
}