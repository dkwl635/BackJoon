#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    istringstream iss(binomial);    
    int a ,b ;
    string op;
    
    iss >> a>>op>>b;
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