#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int challengesNum = 1;
    long long lNum = num;
    
    if(lNum == 1){
        answer = 0;
    }else{
        while(challengesNum <= 500){
            if(lNum == 1){
                break;
            }
            else if(lNum % 2 == 0){
                lNum /= 2;
                answer += 1;
            }
            else{
                lNum = (lNum*3)+1;
                answer += 1;
            }
            challengesNum++;
        }
    }
    if(challengesNum > 500) answer = -1;
    
    return answer;
}