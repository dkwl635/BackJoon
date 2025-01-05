#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int startPos = N - i;

        for (int j = 0; j < startPos; j++)
        {
            cout << " ";
        }

        int starCount = i * 2 - 1;
        for (int j = 0; j < starCount; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}