#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, int>
#define endl '\n'

void solve() {
    int a, b, C1, C2, C3;
    cin >> a >> b >> C1 >> C2 >> C3;

    if (a == b) {
        cout << 0 << endl;
        return;
    }

    // 使用 Dijkstra 算法计算最小代价
    unordered_map<int, ll> cost; // 记录到达每个值的最小代价
    priority_queue<pii, vector<pii>, greater<pii>> pq; // 优先队列，按代价升序排列
    pq.push({0, a}); // 初始状态：代价为 0，位置为 a
    cost[a] = 0;

    while (!pq.empty()) {
        auto [currCost, curr] = pq.top();
        pq.pop();

        // 如果已经到达 b，输出结果
        if (curr == b) {
            cout << currCost << endl;
            return;
        }

        // 如果当前代价已经超过记录的最小代价，跳过
        if (currCost > cost[curr]) continue;

        // 尝试三种操作
        vector<pair<int, ll>> nextStates = {
            {curr + 1, currCost + C1},
            {curr - 1, currCost + C2},
            {curr * 2, currCost + C3}
        };

        for (auto [next, nextCost] : nextStates) {
            if (next > 0 && (cost.find(next) == cost.end() || nextCost < cost[next])) {
                cost[next] = nextCost;
                pq.push({nextCost, next});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}