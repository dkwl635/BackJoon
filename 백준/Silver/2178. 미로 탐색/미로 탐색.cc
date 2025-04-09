#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> map;
vector<vector<int>> visited;

int dirX[4] = { 1, -1, 0, 0};
int dirY[4] = { 0, 0, 1, -1};

int N, M;
int result;


void BFS()
{
    result = 0;
    queue<pair<int, int>> nodes;

    visited[0][0] = 1;
    nodes.push({ 0,0 });
    while (!nodes.empty())
    {
        int x = nodes.front().first;
        int y = nodes.front().second;
        
        if (x + 1 == N && y + 1 == M) return;

        int count = visited[x][y] + 1;
        nodes.pop();

        for (int i = 0; i < 4; ++i)
        {
            int nextX = x + dirX[i];
            int nextY = y + dirY[i];

            if ((nextX < 0 || nextX >= N) || (nextY < 0 || nextY >= M))
                continue;
            
            if (map[nextX][nextY] == 0 || visited[nextX][nextY] > 0)
                continue;

            visited[nextX][nextY] = count;

         
            nodes.push({ nextX , nextY });
        }
 
    }

}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    map = vector<vector<int>>(N, vector<int>(M, 0));
    visited = vector<vector<int>>(N, vector<int>(M, 0));
    for (int i = 0; i < N; ++i)
    {
        string str;
        cin >> str;
        for (int j = 0; j < M; ++j)
        {
            map[i][j] = str[j] - '0';
        }
    }

    BFS();
    cout << visited[N - 1][M - 1];

    return 0;
}