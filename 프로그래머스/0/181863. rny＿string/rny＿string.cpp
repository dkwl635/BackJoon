#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";

    //문자 순회
    for(int i = 0 ;  i < rny_string.size(); i++)
    {
        //m 발견시
        if(rny_string[i] == 'm')
        {
            answer += "rn";
        }
        else
        {
            answer += rny_string[i];
        }
    }
    
    
    return answer;
}