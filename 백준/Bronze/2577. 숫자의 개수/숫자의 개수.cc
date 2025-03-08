#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int nums[10] = { 0 , };
    int num = a * b * c;


    while (num > 0)
    {
        int index = num % 10;
        nums[index]++;
        num = num / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << "\n";
    }


    return 0;
}