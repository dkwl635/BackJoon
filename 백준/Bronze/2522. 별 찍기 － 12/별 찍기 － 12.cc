#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= N  - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        
        cout << endl;
    }

   
	for (int i = 1; i <= N - 1; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j >= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		cout << endl;
	}

    return 0;
}
