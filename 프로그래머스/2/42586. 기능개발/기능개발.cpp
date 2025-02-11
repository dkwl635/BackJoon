#include <string>
#include <vector>
#include <queue>


using namespace std;


vector<int> solution(vector<int> progresses, vector<int> speeds) {

vector<int> answer;

    queue<int> work ;
    for(int i = 0 ; i < progresses.size(); i++)
    {
        int x = 100 - progresses[i];
        int y = x % speeds[i]  == 0 ? x/speeds[i] : x/speeds[i] + 1;
        
        work.push(y);
    }
    
    while(!work.empty())
    {
        int day = work.front();
        work.pop();
        answer.push_back(1);
        while(!work.empty())
        {
            if(day >= work.front())
            {
                work.pop();
                answer.back()++;
            }
            else
            {
                break;
            }
        }
    }
    
    
    
    
    
    


    


    return answer;
}