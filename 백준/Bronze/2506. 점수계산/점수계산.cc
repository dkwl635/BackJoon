#include <iostream>

using namespace std;

int main()
{
    int N ,score, prev;
    score = 0;
    prev = 0;
    cin >> N;
    
    for(int i = 0; i < N ; i++)
    {
        int OX ;
        cin >>OX;
        if(OX == 0)
        {
            prev = 0;
        }
        else
        {
            prev++;
            score += prev;
        }
    }
    
    cout << score;
    
    return 0;
}