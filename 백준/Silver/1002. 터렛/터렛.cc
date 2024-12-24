
#include <iostream>
#include <cmath>
using namespace std;

struct Circle 
{
    double x, y;
    
    double r;

};

int main()
{
    int T;
    double x1, y1, r1;
    double x2, y2, r2;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        Circle A;
        A.x = x1;
        A.y = y1;
        A.r = r1;

        Circle B;
        B.x = x2;
        B.y = y2;
        B.r = r2;

       
       
        double LenX = A.x - B.x;
        double LenY = A.y - B.y;

        if (LenX < 0) { LenX *= -1; }
        if (LenY < 0) { LenY *= -1; }

        double Dis = sqrt((LenX * LenX) + (LenY * LenY));
        double RHop = A.r + B.r;
        double RCha = fabs(A.r - B.r);

  
        if (Dis > RHop)
        {
            cout << 0 << endl;
        }
        else if (Dis < RCha)
        {
            cout << 0 << endl;
        }
        else if (Dis == 0 && A.r == B.r)
        {
            cout << -1 << endl;
        }
        else if (Dis == RHop || Dis == RCha)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
      
    }

    return 0;
}