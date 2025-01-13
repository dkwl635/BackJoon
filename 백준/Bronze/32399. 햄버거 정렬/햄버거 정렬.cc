#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int answer = 0;
    
    // 1()
    
    if(str == "(1)")
    {
        answer = 0;
    }
    else if(str[1] == '1')
    {
      answer = 2;
    }
    else if(str[1] == '(') 
    {
        answer = 1;
     
    }
    else if(str[1] == ')')
    {
      answer = 1; 
    }
    
    cout << answer;
    
    return 0;
}