#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    
    int size = elements.size();
    map<int,int> mapint;
    for(int i = 0 ; i <  size ; i++)
    {
        int start =  0;
        int hop = 0;
        for(int j = i; j < i + size ; j++)
        {
            int pos = j;
            if( pos  >= size){
                pos = pos - size;
            }
            
            int num = elements[pos];
            hop+=num;
            
            mapint[hop] = 0;
        }
        
    }
    
    
    
    return mapint.size();;
}