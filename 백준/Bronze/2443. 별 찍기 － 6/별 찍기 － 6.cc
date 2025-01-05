#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int startPos = 0 + i;

        for (int j = 0; j < startPos; j++)
        {
            cout << " ";
        }

        int starCount = 2 * (N - i) - 1;
        for (int j = 0; j < starCount; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}