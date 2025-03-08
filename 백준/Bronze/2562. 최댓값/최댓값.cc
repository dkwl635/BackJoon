#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n = 9;
    int maxnum  = INT_MIN;
    int index = 0;
    int x ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >>x;
       if(maxnum < x)
       {
           maxnum = x;
           index = i;
       }
    }
    
    index++;
    cout << maxnum << "\n" << index;
    
    return 0;
}