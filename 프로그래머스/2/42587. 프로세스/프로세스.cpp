#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) 
{
    int answer = 0;
 
    //목표
    int* Pointer_location = &priorities[location];
  
    //포인터를 사용한 큐 만들기
    queue<int*> My_queue;
    for(int i  = 0 ; i < priorities.size(); i++)
    {
        My_queue.push(&priorities[i]);
    }
    
    //My_priorities 정렬
    vector<int> My_priorities(priorities.begin() , priorities.end());
    sort(My_priorities.rbegin() , My_priorities.rend());
    queue<int> sort_queue;
     for(int i  = 0 ; i < My_priorities.size(); i++)
    {
        sort_queue.push(My_priorities[i]);
    }
      
    
    //queue 를 조건에 맞게 꺼내 사용하기
    while(My_queue.size() > 0)
    {
        int* current = My_queue.front();
        My_queue.pop();
           
        //우선 횟수 증가
        answer++;
       
        //우선 순위가 낮으면
        if(*current < sort_queue.front())
        {
            //횟수 감소 및 다시 큐에 넣기
            answer--;
            My_queue.push(current);       
        }
        //우선순위 중 실행 가능한지
        else if(sort_queue.front() == *current)
        {  
            //목표 하고자 하는 프로세스가 맞는지
            if(current == Pointer_location)
            {    
                break;
            }   
            else
                sort_queue.pop();   
        }
        
    }//    while(My_queue.size() > 0)
        
    

    return answer;
}