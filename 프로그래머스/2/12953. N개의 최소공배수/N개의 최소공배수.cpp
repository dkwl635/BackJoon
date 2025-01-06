#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    if(arr.size() == 1) {return arr[0];}
    
    for(int i = 0 ; i < arr.size() - 1; i++)
    {
        int num1 , num2;
        num1 = arr[i] > arr[i+1] ? arr[i] : arr[i+1];
        num2 =  arr[i] > arr[i+1] ? arr[i+1] : arr[i];
        
        if(num1 == num2)
        {
            continue;  
        }
        
        int a  = num1;
        int b = num2;
        while(b != 0)
        {
            int remainder = a % b;
            a = b;
            b = remainder;
        }
        
        answer = num1 * num2 / a;
        
        arr[i+1] = answer;
        
                
    }
    
    return answer;
}