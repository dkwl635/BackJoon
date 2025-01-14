#include <iostream>
using namespace std;
int main()
{
    int T = 0;
    cin >> T;
    
    int* answer = new int[T];
    
    for(int i = 0; i < T; i++)
    {
        string str;
        cin >> str;
        int A = str[0] - '0';
        int B = str[2] - '0';
        answer[i] = A + B;
    }
    
      for(int i = 0; i < T; i++)
    {
        cout << answer[i] << endl;
    }
    
    
    delete[] answer;
        
}