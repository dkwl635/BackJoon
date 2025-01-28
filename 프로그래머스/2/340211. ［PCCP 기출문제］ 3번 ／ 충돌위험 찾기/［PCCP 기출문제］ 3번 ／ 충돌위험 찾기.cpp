#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> points, vector<vector<int>> routes)
{
    int answer = 0;
    int robotCount = routes.size();
    int timer = 0;

    vector<vector<int>> robotPoint;
    vector<int> routesIndex(robotCount, 1);
    vector<bool> routeEnd(robotCount, false);

    //스타트 체크 및 시작 지점 확인
    int StartMap[101][101] = { 0 };
    for (int i = 0; i < robotCount; i++)
    {
        //시작 위치 
        int x, y;
        int route = routes[i][0] - 1;

        x = points[route][0];
        y = points[route][1];

        vector<int> pos{ x ,y };
        robotPoint.push_back(pos);
        //시작 위치에서 충돌이 있는지 체크
        StartMap[x][y]++;
        if(StartMap[x][y] == 2)
        {
            answer++;
        }

    }//for(int i = 0; i < robotCount; i++)

    while (true)
    {
        //모든 로봇이 완료 했는지 체크
        bool end = true;
        for (int i = 0; i < robotCount; i++)
        {
            if (routeEnd[i] == false)
            {
                end = false;
            }
        }
        if (end) { break; }

        //지도 이동후 로봇 위치 카운트
        int Map[101][101] = { 0 };
        //위치 이동 후 충돌 확인 및 이동 완료 확인
        for (int i = 0; i < robotCount; i++)
        {
            if (routeEnd[i]) { continue; }
            //현제 몇번째 루트를 가야하는지
            int goalRouteIndex = routesIndex[i];
            //루트 번호 확인
            int goalRoute = routes[i][goalRouteIndex] - 1;
            //목표 위치
            int goalX = points[goalRoute][0];
            int goalY = points[goalRoute][1];
            //현제 위치
            int currentX = robotPoint[i][0];
            int currentY = robotPoint[i][1];
            //이동 
            int MoveX = goalX - currentX;
            int MoveY = goalY - currentY;
            //조건에 따른 
            if (MoveX != 0)
            {
                currentX += (MoveX > 0 ? 1 : -1);
            }
            else if (MoveY != 0)
            {
                currentY += (MoveY > 0 ? 1 : -1);
            }
            //위치 적용
            robotPoint[i][0] = currentX;
            robotPoint[i][1] = currentY;
            //충돌 확인
            Map[currentX][currentY]++;
            if (Map[currentX][currentY] == 2)
            {
                answer++;
            }
            
            //루트 도착 확인 과 다음 루트 확인
            if ((currentX == goalX) && (currentY == goalY))
            {
                routesIndex[i]++;                
                if(routesIndex[i] == routes[i].size())
                {
                    routeEnd[i] = true; 
                }                                                        
            }

        }//for(int i = 0; i < robotCount; i++)                       
    }

    return answer;
}


