#include <iostream>
using namespace std;

int main()
{
    int yt , yj;
    cin >> yt >> yj;
    
    
    bool turn = true;
    while(yt < 5 && yj <5)
    {
        if(turn)
        {
            yj += yt;
        }
        else
        {
            yt += yj;
        }
        turn = !turn;
    }
    cout << (yt > yj ? "yj" : "yt");
    
    return 0;
}