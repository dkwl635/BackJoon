#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
  
    
    int size = 0;
    for(int x : arr){size += x;}
    
    vector<int> answer(size , 0);
    int index = 0;
     for(int x : arr){
        
         for(int i = 0; i < x ; i++)
         {
             answer[index] = x;
             index++;
         }
         
     }
    
    
    return answer;
}