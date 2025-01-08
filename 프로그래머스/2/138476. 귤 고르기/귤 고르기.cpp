#include <string>
#include <vector>
#include <map>


using namespace std;



int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map<int , int> size ;
    for(int i = 0; i < tangerine.size(); i++)
    {
        size[tangerine[i]]++;
    }
    
    vector<int> SizeCount;
    for(auto x : size)
    {
        SizeCount.push_back(x.second);
    }
    
    for(int i = 0; i < SizeCount.size(); i++)
    {
        for(int j = 0 ; j < SizeCount.size() - i - 1; j++)
        {
            if(SizeCount[j] < SizeCount[j + 1])
            {
                int temp = SizeCount[j];
                SizeCount[j] = SizeCount[j + 1];
                SizeCount[j + 1] = temp;
            }
        }
    }
  
    int i = 0;
    while(k > 0)
    {
       k = k - SizeCount[i];
        i++;
        answer++;
    }
     
    return answer;
}