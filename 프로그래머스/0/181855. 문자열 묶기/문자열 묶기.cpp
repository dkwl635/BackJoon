#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    map<int,int> map_size ;
    //사이즈 별 갯수 저장
    for(string str : strArr)
    {
        map_size[str.size()]++;
    }
    //가장 많은 갯수 찾기
    for(auto iter : map_size)
    {
        if(iter.second > answer)
        {
            answer = iter.second;
        }
    }
    
    return answer;
}