#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int N, M , S;
int v1, v2, c;
vector<vector<pair<int, int>>> graph;
vector<int> dist;

void dijkstra()
{
	//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	//비교할 코스트를 먼저 퍼스트 지정한다
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	//페어 ( 코스트 , 노드 )
	pq.push({ 0,S });
	dist[S] = 0;
	while (!pq.empty())
	{
		int cost = pq.top().first;
		int node = pq.top().second;
		pq.pop();
		if (cost > dist[node]) continue;
	
		for (auto& neighborNode : graph[node])
		{
			int nextNode = neighborNode.first;
			int nextCost = neighborNode.second + dist[node];
			
			if (nextCost < dist[nextNode])
			{
				dist[nextNode] = nextCost;
				pq.push({ nextCost,nextNode });
			}
		}

	}

	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	cin >> S;

	graph = vector<vector<pair<int, int>>>(N + 1);
	dist = vector<int>(N + 1, INT_MAX);

	for (int i = 0; i < M; ++i)
	{
		cin >> v1 >> v2 >> c;
		graph[v1].push_back({ v2 , c });
	}

	dijkstra();
	for (int i = 1; i <= N; i++)
	{
		if (dist[i] == INT_MAX)
			cout << "INF" << endl;
		else
			cout << dist[i] << endl;
	}


	return 0;
}