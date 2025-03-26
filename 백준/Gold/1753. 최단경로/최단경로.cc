#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int INF = INT_MAX;
int N, M, S;
vector<pair<int, int>> graph[20001]; // 정적 배열 사용
int dist[20001]; // 최단 거리 배열

void dijkstra() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, S});
    dist[S] = 0;

    while (!pq.empty()) {
        auto [cost, node] = pq.top();
        pq.pop();

        // 현재 경로가 더 크면 무시 (이미 처리됨)
        if (cost > dist[node]) continue;

        // 현재 노드와 연결된 모든 간선 확인
        for (const auto& [nextNode, weight] : graph[node]) {
            int nextCost = weight + dist[node];

            if (nextCost < dist[nextNode]) {
                dist[nextNode] = nextCost;
                pq.push({nextCost, nextNode});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M >> S;

    fill(dist, dist + N + 1, INF); // 거리 배열 초기화

    for (int i = 0; i < M; ++i) {
        int v1, v2, c;
        cin >> v1 >> v2 >> c;
        graph[v1].push_back({v2, c});
    }

    dijkstra();

    for (int i = 1; i <= N; i++) {
        if (dist[i] == INF)
            cout << "INF\n";
        else
            cout << dist[i] << "\n";
    }

    return 0;
}
