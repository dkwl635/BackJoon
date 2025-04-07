#include <iostream>
#include <vector>


using namespace std;

vector<vector<int>> map;
vector<vector<bool>> visited;
int n, m;
int maxSize;
int picture;

//x m , y n
void DFS(int x , int y , int& size)
{
	if ((x < 0 || x >= n) || (y < 0 || y >= m)) return;
	if (visited[x][y] == true) return;
	visited[x][y] = true;
	if (map[x][y] == 0)return;

	size = size + 1;

	DFS(x + 1, y , size);
	DFS(x - 1, y, size);
	DFS(x, y + 1, size);
	DFS(x, y - 1, size);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	maxSize = 0;
	picture = 0;

	
	cin >> n >> m;

	map = vector<vector<int>>(n, vector<int>(m,0));
	visited = vector<vector<bool>>(n, vector<bool>(m,false));

	for(int i = 0; i < n ; ++i)
		for (int j = 0; j < m; ++j)
		{
			cin >> map[i][j];
		}


	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			int size = 0;
			DFS(i, j , size);
			maxSize = max(size, maxSize);
			if (size != 0) { picture++; }
		}
	
	cout << picture << "\n" << maxSize;
	
}