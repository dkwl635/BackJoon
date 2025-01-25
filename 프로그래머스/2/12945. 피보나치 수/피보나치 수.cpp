#include <string>
#include <vector>

using namespace std;

int Fibonacci(int n , vector<int>& Fibonaccis)
{
    //이미 계산된 수
    if(Fibonaccis[n] != -1)
    return Fibonaccis[n];
    
    //종료 조건
    if(n == 0){return 0;}
    
    //예외처리
    if(n == 1 || n == 2){return 1;}

    Fibonaccis[n] = Fibonacci(n -1  , Fibonaccis) + Fibonacci(n -2  , Fibonaccis);
    //문제 조건 
    Fibonaccis[n] =  Fibonaccis[n]%1234567;
    
    return  Fibonaccis[n];
}

using namespace std;

int solution(int n) {
    int answer = 0;
    //파보나치 계산을 위한 배열 생성 
    //미리 계산된 파보나치 수 넣기
    vector<int> Fibonaccis(n + 1 , -1);

    answer = Fibonacci(n , Fibonaccis);

    
    return answer;
}