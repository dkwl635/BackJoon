#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x = 1;
    while (x * x + x + 1 != N)
    {
        x++;
    }

    cout << x;
    return 0;
}