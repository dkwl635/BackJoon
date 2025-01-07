#include <iostream>
using namespace std;

int main()
{
    int N = 4;
    int Max = 0;
    int People = 0;
    for(int i =0; i < N; i++)
    {
        int Add , Minus;
        cin >> Minus >> Add;
        People -= Minus;
        People += Add;
        
        if(Max < People)
        {
            Max = People;
        }
        
    }
    cout << Max;
    return 0;
}