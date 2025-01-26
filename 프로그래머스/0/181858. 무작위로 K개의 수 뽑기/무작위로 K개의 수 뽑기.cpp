#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    map<int , bool> NumMap;

    for(int i = 0 ; i < arr.size(); i++)
    {
        int x = arr[i];
        //map의 특성을 이용하여 판단
        if(NumMap[x] == false)
        {
            NumMap[x] = true;
            answer.push_back(x);
            if(answer.size() == k)
                break;
        }
    }
    
    
  if(answer.size() != k)
  {
      answer.insert(answer.end() , k -  answer.size(), -1);
  }
    

    return answer;
}