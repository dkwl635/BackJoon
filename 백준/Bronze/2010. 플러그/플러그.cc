#include <iostream>
using namespace std;

int main()
{
    //콘덴서의 갯수
    int N = 0;
    cin >> N;
    int answer = 0;
    //전체 콘덴서 구멍 더하기
    for(int i = 0 ; i < N ; i++)
    {
        int X = 0;
        cin >>X;
        answer += X;
    }
    //콘덴서가 물려 있는곳 빼기
    answer = answer - (N -1);
    cout << answer;
    
    return 0;
    
}