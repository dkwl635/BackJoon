#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
 
    int size_p = p.size();
    long long long_p =  stoll(p);
    int temp  = t.size() - size_p;
    
   
    
    
   
    for(int i = 0; i <= t.size() - size_p; i++)
    {
        string str = t.substr(i , size_p);
        long long long_t = stoll(str);
       
       if(long_p >=long_t){
           answer++;
       }
    }
   
    
    
   
    
  
    
    
    return answer;
}