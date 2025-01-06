#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int StarNum = 2 * N - 1;
    int Start = 0;
    int end = 2 * N - 2;
    bool add = true;
   
    for (int i = 0; i < StarNum; i++)
    {
        for (int j = 0; j < StarNum; j++)
        {
            if (i == N - 1 &&  i == j)
            {
                cout << "*";
            }
            else if (j >= Start && j <= end)
            {
                cout << "*";
            }
            else if( j < Start)
            {
                cout << " ";
            }
        }
        if (i == N - 1 ) { add = false; }
       

         if (add)
        {
            Start++;
            end--;       
        }
        else
        {
            Start--;
            end++;           
        }

         cout << endl;
    }

    return 0;
}