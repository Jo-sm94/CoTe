#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    for (int& i : lost)
    {
        auto it = find(reserve.begin(), reserve.end(), i);
        if (it != reserve.end())
        {
            reserve.erase(it);
            i = 0;
        }
    }
    
    for(int i = 1; i <= n; i++){
        cout << "=============" << endl;
        cout << i << "  start" << endl;
        auto it = find(lost.begin(), lost.end(), i);      
        if(it == lost.end()){
            answer++;
            cout << "체육복 있음 answer++" << endl;
        }else{
            cout << "체육복 없음" << endl;
            auto self = find(reserve.begin(), reserve.end(), i);
            auto prev = find(reserve.begin(), reserve.end(), i-1);
            auto next = find(reserve.begin(), reserve.end(), i+1);
            /*
            if(self != reserve.end()){
                cout << "자신이 여벌의 체육복 있음 answer++" << endl;
                answer++;
                reserve.erase(reserve.begin() + distance(reserve.begin(), self));
            }else{
            */
                if(prev != reserve.end()){
                    cout << "앞사람이 여벌의 체육복 있음 answer++" << endl;
                    answer++;
                    reserve.erase(reserve.begin() + distance(reserve.begin(), prev));
                }else{
                    if(next != reserve.end()){
                        cout << "뒷사람이 여벌의 체육복 있음 answer++" << endl;
                        answer++;
                        reserve.erase(reserve.begin() + distance(reserve.begin(), next));
                    }else{
                        cout << "아무도 없음" << endl;
                    }
                }
            //}
            
        }
        
    }
    
    return answer;
}