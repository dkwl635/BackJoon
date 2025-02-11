
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{

    vector<int> answer;
    if(arr.size() ==0 ) return answer;
    
    answer.push_back(arr[0]);
    for(int i = 1 ; i < arr.size() ; i++)
    {
        if(answer.back() != arr[i])
        {
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
    
    

//Vector 사용
/*    
    vector<int> answer;
    answer.push_back(arr[0]);
    int temp = arr[0];
    for(int i = 1 ; i < arr.size(); i++)
    {
        if(temp != arr[i])
        {
            temp = arr[i];
            answer.push_back(arr[i]);
        }
    }
    

    return answer;
*/
    

}