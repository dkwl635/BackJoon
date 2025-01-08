#include <iostream>

using namespace std;

int main()
{
    int answer[3] = {};    
    for(int i = 0 ; i < 3 ; i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        answer[i] = a + b + c + d;
    }
    
     for(int i = 0 ; i < 3 ; i++)
     {
         switch(answer[i])
         {
                 case 0:              
                  cout << "D";     
                 break;
                   case 1:              
                  cout << "C";     
                 break;
                   case 2:              
                  cout << "B";     
                 break;
                   case 3:              
                  cout << "A";     
                 break;
                   case 4:              
                  cout << "E";     
                 break;
                     default :              
                  cout << " ";     
                 break;
         }
         
         cout << endl;
     }
    
    return 0;
}