#include <iostream>
#include <vector>
using namespace std;


int n;
int result = 0;
//rank 행
vector<bool> rank_visit;
//오른쪽에서 왼쪽으로 내려가는 대각선 
vector<bool> RLD_visit;
//왼쪽에서 오른쪽으로 올라가는 대각선
vector<bool> LRU_visit;

void NewQueen(int Q)
{
    //이미 정해진 숫자 만큼 놓았기 때문에 결과값 반영
    if (Q == n)
    {
        result++;
        return;
    }

    //file 열
    int new_Y = Q;
  
    for (int i = 0; i < n; i++)
    {
        int new_X = i;
        
        //다른 행에 이미 퀸이 있는지
        if (rank_visit[new_X] == true)
            continue;
        //다른 열도 체크 할려 했지만 -> 이미 Q이라는 숫자를 더한 값이 오기 때문에
        // 할 필요가 없음
        //if (vertical_visit[new_Y] == true)
        //    continue;
           
        //대각선 체크
        if (RLD_visit[new_Y + new_X] == true)
            continue;
        //음수로 나오는걸 방지하기 위해
        if(LRU_visit[new_Y - new_X + n - 1] == true)
            continue;

        //방문 예정이니 체크 해놓기
        rank_visit[new_X] = true;
        RLD_visit[new_Y + new_X] = true;
        LRU_visit[new_Y - new_X + n - 1] = true;
        NewQueen(Q + 1);
        
        //다시 돌아왔으니 
        rank_visit[new_X] = false;
        RLD_visit[new_Y + new_X] = false;
        LRU_visit[new_Y - new_X + n - 1] = false;

    }


}



int main()
{
    cin >> n;
    rank_visit = vector<bool>(n, false);
    RLD_visit = vector<bool>(n + n, false);
    LRU_visit = vector<bool>(n + n, false);
    NewQueen(0);

    cout << result;


    return 0;
}