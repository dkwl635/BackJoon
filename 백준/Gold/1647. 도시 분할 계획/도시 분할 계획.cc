#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, m;
int a, b, c;
int totalCost;


vector<int> parents;

struct Edge
{
	int u, v, cost;
};
vector<Edge> edges;


int findParent(int x)
{
	if (parents[x] == x) return x;

	return parents[x] = findParent(parents[x]);
}

void unionParent(int x, int y)
{
	parents[findParent(x)] = findParent(y);
}

bool compare(Edge& a, Edge& b)
{
	return a.cost < b.cost;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	//n 은 집의 갯수
	//m 은 루트
	parents = vector<int>(n + 1);
	for (int i = 1; i <= n;++i)
	{
		parents[i] = i;
	}
	totalCost = 0;

	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b >> c;
		
		edges.push_back({ a,b,c, });
	}
	sort(edges.begin(), edges.end(), compare);

	int maxCost = INT_MIN;
	for (auto& e : edges)
	{
		if (findParent(e.u) != findParent(e.v))
		{
			unionParent(e.u, e.v);
			totalCost += e.cost;
			maxCost = max(maxCost, e.cost);
		}
		
	}
	//36 
	cout << totalCost- maxCost;


	return 0;
}