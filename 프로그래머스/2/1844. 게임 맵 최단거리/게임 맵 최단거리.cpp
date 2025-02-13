#include<vector>
#include <queue>

using namespace std;

int solution(vector<vector<int>> maps)
{
    //맵 사이즈
    int y = maps.size();
    int x = maps[0].size();
     
    //방향 
    int dx[4] =  {-1 , 1 , 0 , 0};
    int dy[4] =  { 0 , 0 , -1 , 1};
    
    //방문 했던곳
    vector<vector<bool>> visited(y , vector<bool>(x , false));
    //거리 h 할당 할 곳
    vector<vector<int>> dist(y , vector<int>(x , -1));
    
    //pair < y , x >
    queue<pair<int , int>> q;
    
    //기본값
    q.push({0 ,0});
    visited[0][0] = true;
    dist[0][0] = 1;
    while(!q.empty())
    {
        //q 에 들어간 값 가져오기
        pair<int,int> LocalPosition = q.front();
        int PostitionY = LocalPosition.first;
        int PostitionX = LocalPosition.second;
        q.pop();
        
        //도착 지점
        if(PostitionY == y - 1 && PostitionX == x - 1)
        {
            return dist[PostitionY][PostitionX];
        }
        
        
        for(int i = 0 ; i < 4 ; i++)
        {
            //새로운 좌표
            int newY = PostitionY + dy[i];
            int newX = PostitionX + dx[i];
          
            //좌표 맵 제한 체크 , 주어진 맵에서 갈 수 있는지
            //이미 방문 했는지
            if(newY >= 0 && newY < y 
             && newX >= 0 && newX < x
             && maps[newY][newX] == 1
             && !visited[newY][newX])
            {
                //방문 할꺼니까 true
                visited[newY][newX] = true;
                //새 좌표 까지의 거리길이
                dist[newY][newX] = dist[PostitionY][PostitionX] + 1;
                //큐에 다음 체크할 좌표 넣기
                q.push({newY, newX});
            }
        }
        
        
    }
    

   return -1;
}