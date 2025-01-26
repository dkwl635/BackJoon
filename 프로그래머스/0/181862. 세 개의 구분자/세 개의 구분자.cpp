#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    int size = 0;
    int start= 0;
    
    for(int i= 0; i < myStr.size(); i++)
    {
        if(myStr[i] == 'a' ||myStr[i] == 'b' || myStr[i] == 'c' )
        {
            if(size > 0)
            {
                string temp = myStr.substr(start , size);
                answer.push_back(temp);   
            }
            start = i+1;
            size = 0;
        }
        else
        {
            size++;
        }
    }
    
    if(size > 0)
    {
        string temp = myStr.substr(start , size);
        answer.push_back(temp);   
    }
    
    if(answer.size() == 0)
    {
        answer.push_back("EMPTY");
    }
    return answer;
}