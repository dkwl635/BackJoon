#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> edge) 
{
    int answer = 0;

    //지도
    vector<vector<int>> map(n + 1);

    // 거리 체크를 위한 배열
    vector<int> counts(n + 1,0);
    vector<bool> vis(n + 1, false);
    // BFS를 위한 Queue
    queue<int> queue;
  
    //인접 그래프 만들기
    for (int i = 0; i < edge.size(); i++)
    {
        //map 만들기
        int a , b;
        a = edge[i][0];
        b = edge[i][1];
        
        map[a].push_back(b);
        map[b].push_back(a);
    }

    //본격 큐를 만들어 거리 찾기
    //시작 큐 넣기
    //1번 시작
    queue.push(1);
    counts[1] = 1;
    vis[1] = true;
    while (!queue.empty())
    {
        //현재 노드
        int curNode = queue.front();
        queue.pop();
    
        //연결된 모든 노드 돌기
        for (int i = 0; i < map[curNode].size(); i++)
        {  
            //연결된 다음 노드
            int nextNode = map[curNode][i];
          
            if (!vis[nextNode])//방문 하지 않은 곳 만 
            {
                //현재 노드 부터의 회수 + 1
                counts[nextNode] =  counts[curNode] + 1;
               
                vis[nextNode] = true;
                //다음 체크할 노드 큐에 넣기
                queue.push(nextNode);
            }
        }
    }
    //연결된 모든 노드 순환 후

    //정렬 내림차순으로 
    sort(counts.rbegin(), counts.rend());
    for (int i = 0; i < counts.size(); i++)
    {
        //제일 먼 카운트가 같은경우 체크   
        if (counts[i] == counts[0])
            answer++;
        else
            break;
    }



    return answer;
}
