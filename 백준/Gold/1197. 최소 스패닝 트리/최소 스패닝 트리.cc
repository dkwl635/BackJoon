//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//using namespace std;
//
////int 다음 도착 도시 ,  int 최소 비용 // 버스의 갯수
//vector<pair<int, int>> graph[100001];
////다음 도시까지 들어가는 최소 비용
//int miniCost[1001];
////최소 루트를 넣어두는 버스
//vector<int> NextBus;
//
//int n, m, s, e;
//int v1, v2, c;
//
//void dijkstra()
//{
//	//페어 => 현제 코스트 ,다음 위치 시작
//	priority_queue< pair<int, int>, vector<pair<int, int>>, greater< >> pq;
//
//	//시작 코스트 0 이고 시작위치
//	pq.push({ 0,s });
//	miniCost[s] = 0;
//	while (!pq.empty())
//	{
//		auto pair = pq.top();
//		pq.pop();
//		//현제 이동 후까지의 코스트 
//		int cost = pair.first;
//		//시작위치
//		int startCity = pair.second;
//
//		//현제 도시에 도착한 비용이 이전 코스트보다 비싼경우
//		//굳이 갈 필요가 없음
//		if (cost > miniCost[startCity]) { continue; }
//		
//		//현제 위치가 도착한 도시라면
//		if (startCity == e) return;
//
//		//현제 도시에서 시작하는 다음 노선 순회
//		for (auto& Node : graph[startCity])
//		{
//			//만약 노선 탑승시 비용
//			int nextCost = cost + Node.second;
//			int nextCity = Node.first;
//
//			//다음 시티까지 가는 코스트가 저장된 코스트 보다 저렴하면
//			if (nextCost < miniCost[nextCity])
//			{
//				//최저비용 갱신
//				miniCost[nextCity] = nextCost;
//
//				NextBus[nextCity] = startCity;
//
//				//다음시티 
//				pq.push({ nextCost , nextCity });
//
//			}
//		}
//		
//	}
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	//배열 초기화
//	cin >> n >> m;
//	for (int i = 0; i < m; ++i)
//	{
//		//v1 시작도시  ,v2 다음도시 , c 비용
//		cin >> v1 >> v2 >> c;
//		graph[v1].push_back({ v2 ,c });
//	}
//	//코스트 초기값 설정
//	NextBus.push_back(0);
//	for (int i = 1; i <= n; ++i)
//	{
//		miniCost[i] = INT_MAX;
//		//각 도시 별 최적 노선을 저장할
//		NextBus.push_back(0);
//	}
//
//	cin >> s >> e;
//
//	dijkstra();
// 
//	for (int i = 1; i <= n; ++i)
//	{
//
//		cout << NextBus[i];
//	}
//
//	return 0;
//}


#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int V, E;
int u, v, c;

vector<vector<pair<int, int>>> graph;
vector<bool> visited;
int totalCost = 0;

void prim()
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	pq.push({ 0,1 });

	while (!pq.empty())
	{
		int cost = pq.top().first;
		int node = pq.top().second;
		pq.pop();

		if (visited[node])continue;
		visited[node] = true;

		totalCost += cost;
		for (auto& neighborNode : graph[node])
		{
			int nextNode = neighborNode.first;
			int nextCost = neighborNode.second;

			if (visited[nextNode])continue;
			pq.push({ nextCost , nextNode });

		}
	}

	cout << totalCost;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> V >> E;

	graph = vector<vector<pair<int, int>>>(V + 1);
	visited = vector<bool>(V + 1);

	for (int i = 1; i <= E; i++)
	{
		cin >> u >> v >> c;
		graph[u].push_back({ v,c });
		graph[v].push_back({ u,c });
	}


	prim();
}