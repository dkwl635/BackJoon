#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    
    //짝수
    if(arr.size() % 2)
    {
        for(int i = 0; i < arr.size(); i +=2 )
        {
            arr[i] += n;
        }
    }
    //홀수
    else
    {
          for(int i = 1; i < arr.size(); i +=2 )
        {
            arr[i] += n;
        }
    }
    
    return arr;
}