#include <string>
#include <vector>

using namespace std;
int Size = 0;
int targetNum = 0;
int answer = 0;

void DFS(vector<int> numbers , int index, int temp)
{
    //다음 숫자 가 있는지 보기 위한
    index++;
    if(index == Size)
    {
        //배열 사이즈 끝이면 타겟의 숫자와 동일한지
        if(targetNum == temp)
        {
            answer++;
        }
        return;
    }
    
    //다른 더하기 , 빼기 했을 경우을 구하기 위한
    DFS(numbers , index , (temp + numbers[index])  );
    DFS(numbers , index , (temp - numbers[index])  );
    
}

int solution(vector<int> numbers, int target) {
  
    answer = 0;
    Size = numbers.size();
    targetNum = target;
    //첫 숫자 더하기 , 뺴기
    DFS(numbers , 0 , numbers[0]);
    DFS(numbers , 0 , -numbers[0]);
    
    return answer;
}