#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b;
    cin >> a >> b;

    if (a > b)
    {
        long long temp = a;
        a = b;
        b = temp;
    }

    if (a == b || a + 1 == b)
    {
        cout << "0";
    }
    else
    {
        int count = b - a - 1;
        cout << count << "\n";
        for (int i = 0; i < count; i++)
        {
            cout << ++a << " ";
        }

    }


}