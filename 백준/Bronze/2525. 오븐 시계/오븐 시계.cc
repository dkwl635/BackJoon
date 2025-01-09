#include <iostream>
using namespace std;

int main()
{
    int hour , min , need;
    cin >> hour >> min >> need;
    
    int temp = hour * 60 + min + need;
    //1440m  == 24h
    if(temp >= 1440){temp -= 1440;}
    
    cout << temp/60 << " " << temp%60;

    return 0;
}