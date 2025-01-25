#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    //순회하며 AB 수정
    for(int i = 0 ; i < myString.size(); i++)
    {
        if(myString[i] == 'A')
        {
           myString[i]  = 'B'; 
        }
        else
        {
             myString[i]  = 'A'; 
        }
    }
    
    //특수 조건 찾기
    if(myString.find(pat) != string::npos)
    {
        answer = 1;
    }
    
    return answer;
}