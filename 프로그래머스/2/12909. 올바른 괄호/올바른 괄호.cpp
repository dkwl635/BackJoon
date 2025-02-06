#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
 
    int a=0;
    for(char c : s)
    {
       
        a += c =='(' ? 1 :-1;
        
        if(a == -1)
            return false;
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    answer = a == 0 ? true : false; 

    return answer;
}