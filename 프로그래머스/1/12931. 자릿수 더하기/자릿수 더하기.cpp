#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    while(n > 0){
        int a = n % 10;
        answer += a;
        n /= 10;
    }
    
    return answer;
}