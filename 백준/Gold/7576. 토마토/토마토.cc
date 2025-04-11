#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int m, n ,x;
int result;
int tomato;
queue<pair<int, int>> q;
vector<vector<int>> map;
vector<vector<bool>> visited;

int dirX[4] = { 0,0,1,-1 };
int dirY[4] = { 1,-1,0,0 };

void NextDay()
{	
	result = -1;
	do
	{
		queue<pair<int, int>> Newq;
		++result;
		while (!q.empty())
		{
			int x = q.front().first;
			int y = q.front().second;
			q.pop();

			for (int i = 0; i < 4; ++i)
			{
				int newX = x + dirX[i];
				int newY = y + dirY[i];

				if (newX < 0 || newX >= n || newY < 0 || newY >= m)
					continue;

				if (map[newX][newY] == 1 || map[newX][newY] == -1)
					continue;
				--tomato;
				map[newX][newY] = 1;
				Newq.push({ newX , newY });
			}
		}

		q = Newq;
	

	} while (!q.empty());

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	tomato = 0;
	
	cin >> m >> n;
	map = vector<vector<int>>(n, vector<int>(m, 0));
	visited = vector<vector<bool>>(n, vector<bool>(m, false));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			int v;
			cin >> v;
			if (v == 0)
			{
				++tomato;
			}
			else if (v == 1)
			{
				q.push({ i,j });
			}

			map[i][j] = v;
		}

	
	NextDay();
	if (tomato > 0)
		cout << -1;
	else
	cout << result;
	return 0;
}
