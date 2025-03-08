#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[5];
    int hop = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        hop += num[i];
    }

    cout << hop / 5 << "\n";

    sort(num, num + 5);
    cout << num[2];


    return 0;
}