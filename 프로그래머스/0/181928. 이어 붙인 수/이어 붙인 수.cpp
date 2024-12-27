#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
 
    int num1 = 0;
    int num2 = 0;
    for(int i = 0; i < num_list.size(); i++)
    {
        if(num_list[i] & 1)
            num1 = num1 *10 + num_list[i];
        else
            num2 = num2 *10 + num_list[i];
   }
    
    
    return num1 + num2;
}