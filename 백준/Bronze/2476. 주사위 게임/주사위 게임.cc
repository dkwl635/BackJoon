#include <iostream>
using namespace std;
int main()
{
    int money = 0;
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int newMoney = 0;

        if (x == y && y == z)
        {
            newMoney += (10000 + (x * 1000));
        }
        else if (x == y || y == z || z == x)
        {
            int dice = 0;
            if (x == y) { dice = x; }
            else if (y == z) { dice = y; }
            else { dice = z; }
            newMoney += (1000 + (dice * 100));
        }
        else
        {
            int dice = x;
            if (dice < y) { dice = y; }
            if (dice < z) { dice = z; }

            newMoney += (dice * 100);
        }
    
        if (newMoney > money) { money = newMoney; }

    }

    cout << money;
    return 0;
}