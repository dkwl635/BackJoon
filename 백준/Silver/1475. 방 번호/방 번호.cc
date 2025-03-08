#include <iostream>

using namespace std;

int main()
{
    string room;
    cin >> room;

    int num[10] = { 0, };


    for (char c : room)
    {
        num[c - '0']++;
    }
   


    num[6] = num[6] + num[9];
    num[9] = 0;
    num[6] = num[6] / 2 + num[6] % 2;

    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }

    cout << max;


    return 0;
}