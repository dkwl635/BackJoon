#include <iostream>

using namespace std;

int student[7][2] = { 0 , };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int needRoom = 0;
    int n, k;
    cin >> n >> k;

    //0 여 , 1남
    for (int i = 0; i < n; i++)
    {
        int grade;
        int gender;
        cin >> gender >> grade;

        student[grade][gender]++;
    }

    for (int i = 1; i <= 6; i++)
    {
        int woman = student[i][0];
        if (woman > 0)
            needRoom += woman / k + ((woman % k > 0) ? 1 : 0);

        int man = student[i][1];
        if (man)
            needRoom += man / k + ((man % k > 0) ? 1 : 0);
    }

    cout << needRoom;

    return 0;
}