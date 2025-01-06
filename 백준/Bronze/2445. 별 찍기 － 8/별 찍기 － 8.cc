#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int len = 2 * N - 1;
    int startCount = 2 * N;

    int j = 1;
    int add = true;
    for (int i = 1; i <= len; i++)
    {
        
        int Start = j;
        int End = (startCount - 1) - j;

        for (int s = 0; s < startCount; s++)
        {
         
          if (s >= Start && s <= End)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        


        if (j == N)
        {
            add = false;
        }

        if (add) 
        { j++; }
        else { j--; }
       
        cout << endl;
    }
    
   


    return 0;
}