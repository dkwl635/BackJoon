#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    int start = 0;
    int size = 0;
    
    for(int i = 0 ; i < myString.size(); i++)
    {
        //x 를 만나면
        if(myString[i] =='x')
        {
            //앞에 사이즈가 있다면
            if(size > 0)
            {
                //사이즈 만큼 추출
               string temp = myString.substr(start ,size);
               answer.push_back(temp);
               size = 0;
               start = i + 1;
            }
            else
            {
                size = 0; 
                start = i + 1;
            }
        }
        else
        {
             size++;
        }
    }
    
    if(size >0)
    {
          string temp = myString.substr(start ,size);
          answer.push_back(temp);
    }
    
    //알파벳 순으로 정렬
    sort(answer.begin() , answer.end());
    
    return answer;
}