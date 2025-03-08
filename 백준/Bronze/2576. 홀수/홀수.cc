#include <iostream>
using namespace std;

int main()
{
    int hop = 0;
    int min = 101;
    int x ;
    
    int n = 7;
    for(int i = 0; i < n ; i++)
    {
        cin >> x;
        if(x & 1)
        {    
            hop += x;
            if(x < min)
                min = x;
        }
    }
    
    if(hop == 0)
        cout << "-1";
    else
        cout << hop << "\n" << min;
    
    return 0;
}