#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int n, m, u, v;

vector<vector<int>> graph;
vector<int> InDegree;
vector<int> Order;

void toplogySort()
{
	queue<int> q;

	for (int i = 1; i <= n; ++i)
	{
		if (InDegree[i] == 0)
		{
			q.push(i);
			Order.emplace_back(i);
		}
	}

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		for (int& neighborNode : graph[node])
		{
			InDegree[neighborNode]--;
			if (InDegree[neighborNode] == 0)
			{
				q.push(neighborNode);
				Order.emplace_back(neighborNode);
			}
		}
	}

	if (Order.size() != n) { return; }


	for (int i = 0; i < Order.size(); ++i)
	{
		cout << Order[i] << " ";
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	graph = vector<vector<int>>(n + 1);
	InDegree = vector<int>(n + 1 , 0);

	for (int i = 0; i < m; ++i)
	{
		cin >> u >> v;
		graph[u].emplace_back(v);

		InDegree[v]++;

	}

	toplogySort();

	return 0;
}

