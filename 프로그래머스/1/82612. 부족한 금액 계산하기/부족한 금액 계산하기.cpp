#include <math.h>
#include <string>
#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long addPrice = price;
    
    for(int i=1; i<=count; i++) {
        answer += addPrice * i;   
    }
    
    if(answer-money <= 0){
        answer = 0;
    }else{
        answer = answer-money;
    }

    return answer;
}