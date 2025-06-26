#include <string>
#include <vector>
#include <algorithm>

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
        auto it = find(lost.begin(), lost.end(), i);      
        if(it == lost.end()){
            answer++;
        }else{
            auto prev = find(reserve.begin(), reserve.end(), i-1);
            auto next = find(reserve.begin(), reserve.end(), i+1);

            if(prev != reserve.end()){
                answer++;
                reserve.erase(reserve.begin() + distance(reserve.begin(), prev));
            }else{
                if(next != reserve.end()){
                    answer++;
                    reserve.erase(reserve.begin() + distance(reserve.begin(), next));
                }
            }       
        }    
    }
    
    return answer;
}
