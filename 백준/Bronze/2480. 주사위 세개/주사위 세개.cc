#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dice[3];
    int result = 0;
    cin >> dice[0] >> dice[1] >> dice[2];
    sort(dice , dice + 3);
    if(dice[0] == dice[2])
        result = 10000 + dice[0] * 1000;
    else if(dice[0] == dice[1] ||dice[1] == dice[2] )
        result = 1000 + dice[1] * 100;
    else 
        result = dice[2] * 100;
    
    cout << result;
    
    return 0;
}