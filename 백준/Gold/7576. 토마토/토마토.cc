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



void CheckTomato(int x ,int y , bool& find)
{
	if (x < 0 || x >= n || y < 0 || y >= m)
		return;

	if (visited[x][y] == true) return;
	if (map[x][y] == -1)
	{
		return;
	}

	visited[x][y] = true;

	if (map[x][y] == 1)
	{
		find = true;
		q.push({ x,y });
	}
	else if (map[x][y] == 0)
	{
		tomato++;
	}


	for (int i = 0; i < 4; ++i)
	{
		int newX = x + dirX[i];
		int newY = y + dirY[i];
		CheckTomato(newX, newY, find);
	}
}
void NextDay()
{
	while (tomato > 0)
	{
		result++;
		queue<pair<int, int>> Newq;
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
				tomato--;
				map[newX][newY] = 1;
				Newq.push({ newX , newY });
			}
		}

		q = Newq;
	}
}

int main()
{

	tomato = 0;
	result = 0;

	cin >> m >> n;
	map = vector<vector<int>>(n, vector<int>(m, 0));
	visited = vector<vector<bool>>(n, vector<bool>(m, false));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> map[i][j];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			if (visited[i][j] == true) continue;
			if (map[i][j] == -1) continue;

			bool t = false;
			CheckTomato(i, j , t);

			if (t == false)
			{
				cout << -1;
				return 0;
			}
		}

	NextDay();
	cout << result;
	return 0;
}
