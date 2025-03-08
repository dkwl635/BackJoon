#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size[9];
    int result[7];

    for (int i = 0; i < 9; i++)
    {
        cin >> size[i];
    }
    

    int hop = 0;
    for (int i = 0; i < 9; i++)
    {
       
        for (int j = 0; j < 9; j++)
        {
            if (i == j) continue;

            int y = 0;
            hop = 0;
            for (int x = 0; x < 9; x++)
            {
                if (x == i || x == j) continue;
                hop += size[x];
                result[y] = size[x];
                y++;
            }

            if (hop == 100) break;
        }
        if (hop == 100) break;
    }

    sort(result, result + 7);

    for (int i = 0; i < 7; i++) cout << result[i] << "\n";


    return 0;
}