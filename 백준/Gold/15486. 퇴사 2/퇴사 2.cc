#include <iostream>
#include <vector>

using namespace std;

int N, result;
vector<pair<int, int >> v;
vector<int> cost;

void DP()
{
	result = 0;
	cost[0] = 0;
	for (int i = 1; i <= N; ++i)
	{
		cost[i] = max(cost[i], cost[i - 1]);

		int resultDay = i + v[i].first - 1;

		if (resultDay > N) continue;
	
	
		int CostA = cost[resultDay];
		int CostB = cost[i - 1] + v[i].second;
		
		cost[resultDay] = max(CostA, CostB);

		result = max(result, cost[resultDay]);
	}


}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	v = vector<pair<int, int >>(N + 1);
	cost = vector<int>(N + 1, 0);

	for (int i = 1; i <= N; ++i)
	{
		int a, b;
		cin >> v[i].first >> v[i].second;
	}

	DP();

	//for (int i = 1; i <= N; ++i)
	//{
	//	cout << cost[i] << " ";
	//}

	cout << result;
}
