#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> map;
vector<vector<bool>> visited;
int n, m;
int maxSize;
int picture;

int dx[4] = {1, -1, 0, 0}; // 하, 상, 우, 좌
int dy[4] = {0, 0, 1, -1};

void BFS(int startX, int startY, int& size)
{
	queue<pair<int, int>> q;
	q.push({startX, startY});
	visited[startX][startY] = true;
	size = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; ++i) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (!visited[nx][ny] && map[nx][ny] == 1) {
					visited[nx][ny] = true;
					q.push({nx, ny});
					size++;
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	maxSize = 0;
	picture = 0;

	cin >> n >> m;
	map = vector<vector<int>>(n, vector<int>(m, 0));
	visited = vector<vector<bool>>(n, vector<bool>(m, false));

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> map[i][j];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			if (map[i][j] == 1 && !visited[i][j]) {
				int size = 0;
				BFS(i, j, size);
				picture++;
				maxSize = max(maxSize, size);
			}
		}

	cout << picture << "\n" << maxSize;
}