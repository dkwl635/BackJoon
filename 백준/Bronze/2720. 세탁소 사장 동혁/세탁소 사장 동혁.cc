#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    //답을 넣기 위한 2차원 배열 생성
    int** answer = new int* [T];
    for (int i = 0; i < T; i++)
    {
        answer[i] = new int[4];
    }
    int Q = 25;
    int D = 10;
    int N = 5;

    //문제 풀이
    for (int i = 0; i < T; i++)
    {
        int C = 0;
        cin >> C;

        //Q 의 갯수
        answer[i][0] = C / Q;
        C = C % Q;
        //D 의 갯수
        answer[i][1] = C / D;
        C = C % D;
        //N 의 갯수
        answer[i][2] = C / N;
        //P 의 갯수  
        answer[i][3] = C % N;
    }

    //출력
    for (int i = 0; i < T; i++)
    {
        cout << answer[i][0] << " " << answer[i][1] << " " << answer[i][2] << " " << answer[i][3] << endl;
    }


    //동적할당 메모리 해제
    for (int i = 0; i < T; i++)
    {
        delete[] answer[i];
    }
    delete[] answer;



    return 0;
}