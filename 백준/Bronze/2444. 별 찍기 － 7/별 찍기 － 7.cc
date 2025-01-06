#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int start = N - i;
        int starCount = (i * 2) - 1;
        for (int j = 0; j < start; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < starCount; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    
    for (int i = 1; i <= N - 1; i++)
    {
        int start = i;
        int starCount = ((N - i) * 2) - 1;
        for (int j = 0; j < start; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < starCount; j++)
        {
            cout << "*";
        }

        cout << endl;
    }


    return 0;
}