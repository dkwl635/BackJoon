#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int solution(vector<int> citations) {
   
    //정렬
    sort(citations.begin() , citations.end());
    int answer = 0;
    int n = citations.size();
    
    for(int i = 0 ; i < citations.size(); i++)
    {
        //h번 인용 -> 자신의 논문 수의 갯수
       int h = n - i;
       
        
       if(citations[i] >= h)
       {
           answer=h;
           break;
       }
       
    }
    
    
    return answer;

}