#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];
        bool bTrue = flag[i];
        //조건에 해당하면 실행
        if(bTrue)
        {
            answer.insert(answer.end() , x * 2, x);
        }
        else
        {
           answer.erase(answer.end() - x , answer.end() );
        }
        
    }
    
    return answer;
}