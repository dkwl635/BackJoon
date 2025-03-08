#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int card[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    
    int start, end;
    for(int i = 0; i < 10 ; i++)
    {
        cin >> start >> end;
        if(start == end)
            continue;
        
        start--;
        
        reverse(card + start , card + end);
    }
    
    for(int i = 0; i < 20 ; i++)
    {
        cout << card[i] << " ";
    }
    
    return 0;
}