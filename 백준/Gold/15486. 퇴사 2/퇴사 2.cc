#include <iostream>
#include <vector>

using namespace std;

int N, result;
vector<int> cost;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	cost = vector<int>(N + 1, 0);

	result = 0;
	cost[0] = 0;
	int Day, AddCost;
	for (int i = 1; i <= N; ++i)
	{
		cin >> Day >> AddCost;

		cost[i] = max(cost[i], cost[i - 1]);

		int resultDay = i + Day - 1;

		if (resultDay > N) continue;

		int CostA = cost[resultDay];
		int CostB = cost[i - 1] + AddCost;

		cost[resultDay] = max(CostA, CostB);

		result = max(result, cost[resultDay]);
	}


	//for (int i = 1; i <= N; ++i)
	//{
	//	cout << cost[i] << " ";
	//}

	cout << result;
}
