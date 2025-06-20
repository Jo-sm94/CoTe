#include <string>
#include <vector>

using namespace std;

int cd(int number){
    int result = 0;
    
    for(int i = 1; i*i <= number; i++){
        if(i*i==number){
            result++;
        }else if(number % i == 0){
            result += 2;
        }
    }
    
    return result;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1; i <= number; i++){
        int cdPower = cd(i);
        if(cdPower > limit){
            answer += power;
        }else{
            answer += cdPower;
        }
    }
    
    return answer;
}