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

    //지도
    int StartMap[101][101] = { 0 };
    for (int i = 0; i < robotCount; i++)
    {
        int x, y;
        int route = routes[i][0] - 1;

        x = points[route][0];
        y = points[route][1];

        vector<int> pos{ x ,y };
        robotPoint.push_back(pos);
        StartMap[x][y]++;
        if(StartMap[x][y] == 2)
        {
            answer++;
        }

    }//for(int i = 0; i < robotCount; i++)

    while (true)
    {
        bool end = true;
        for (int i = 0; i < robotCount; i++)
        {
            if (routeEnd[i] == false)
            {
                end = false;
            }
        }
        if (end) { break; }

        //지도
        int Map[101][101] = { 0 };
        for (int i = 0; i < robotCount; i++)
        {
            if (routeEnd[i]) { continue; }

            int goalRouteIndex = routesIndex[i];
            int goalRoute = routes[i][goalRouteIndex] - 1;

            int goalX = points[goalRoute][0];
            int goalY = points[goalRoute][1];

            int currentX = robotPoint[i][0];
            int currentY = robotPoint[i][1];

            int MoveX = goalX - currentX;
            int MoveY = goalY - currentY;

            if (MoveX != 0)
            {
                currentX += (MoveX > 0 ? 1 : -1);
            }
            else if (MoveY != 0)
            {
                currentY += (MoveY > 0 ? 1 : -1);
            }

            robotPoint[i][0] = currentX;
            robotPoint[i][1] = currentY;

            Map[currentX][currentY]++;
            if (Map[currentX][currentY] == 2)
            {
                answer++;
            }

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


