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
#define INF LLONG_MIN

const int mod = 1e9 + 7;
const int N = 1e5 + 10;
vector<ll> maxSubArrayUpToI(vector<int>& nums) {
    int n = nums.size();
    vector<ll> dp(n);  // dp[i] = 前 i 项的最大子段和
    dp[0] = nums[0];    // 前 1 项的最大子段和就是 nums[0]
    int currentSum = nums[0];
    int maxSum = nums[0];
    
    for (int i = 1; i < n; i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
        dp[i] = maxSum;
    }
    return dp;
}
void solve() {
    int n;cin >> n;
    vector<int> q(n), p(n);
    for (int i = 0; i < n; ++ i) {
        cin >> q[i];
        p[n - i - 1] = q[i];
    }
    vector<ll> dpi = maxSubArrayUpToI(q);
    vector<ll> dpj = maxSubArrayUpToI(p);
    ll ans = INF;
    for (int i = 0; i < n - 1; ++ i) {
        ans = max(ans, dpi[i] + dpj[n - i - 2]);
    }
    cout << ans << endl;
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