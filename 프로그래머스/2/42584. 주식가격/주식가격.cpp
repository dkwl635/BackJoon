#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
    
    //정답이 들어가는 배열 가격기록된 만큼 사이즈 초기화
    vector<int> answer(prices.size() , 0);
    
    //기록 저장
    stack<int> stackPrices;

    for(int i = 0; i < prices.size() ; i++)
    {
       
        
        //큐에 기록이 있다면
        while(!stackPrices.empty())
        {
            //last 큐 마지막에 들어가있는 기록된 시간 
            int last = stackPrices.top();
            //현제 시간
            int cur = i; 
            
            //기록된 시간의 주식가격 과 현제 시간의 주식가격 비교
            if(prices[last] > prices[cur])  
            {
                //하락 했을때
                //현제 시간 - 기록된 시간 = 시간차
                int time = i - last;
                //정답 배열에 해당하는 기록된시간을 기준으로 시간차를 넣어둔다.
                //시간차는 내려가기 전까지의 초 가 된다.
                answer[last] = time;
                //체크 완료한 제일위에 원소 제거
                stackPrices.pop();    
            }
            else
            {
                break;
            }
        }
      
    //현제 기록된 i 즉 시간때를 큐에 넣어둔다.
      stackPrices.push(i);
    }
    
    
    //큐에 남아있는 기록을 
    while (!stackPrices.empty())
    {
        //들어간 시간 과 마지막 시간의 차를 계산
        int time = (prices.size()-1) - stackPrices.top();
        
        answer[stackPrices.top()] = time;
        stackPrices.pop();
    }
    
    return answer;
    
    
    
    
    //1차 -> 효율성 실패
    /*
    //기록 저장
    vector<int> answer(prices.size() , 0);
    //기록측정을 계속하는지
    vector<bool> b_answer(prices.size() , true);
    
    int Size = prices.size();
    //기록 순서대로 순회
    for(int i = 0; i < Size; i++)
    {
        //현제 가격
        int curPrice = prices[i];
        
        //과거 기록에서 비교하여 초 추가하기
        for(int j = 0; j < i; j++)
        {
            //이미 하락장을 맞이 했는지 체크
            if(!b_answer[j]) continue;
            //초 증가
            answer[j]++;
            //하락장 체크
            if(prices[j] > curPrice)
            {
                b_answer[j] = false;
            }
            
        }
    }
    
    return answer;
    */
}