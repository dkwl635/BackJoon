#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    //문자열 분리를 위한 
    istringstream iss(binomial);    
    int a ,b ;
    string op;
    //분리된 데이터 
    iss >> a>>op>>b;
    
    //계산
    if(op == "+")
    {
        answer = a + b;
    }
    else if(op == "-")
    {
         answer = a - b;
    }
    else
    {
         answer = a * b;
    }
    
    return answer;
}