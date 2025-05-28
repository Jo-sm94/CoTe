#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    double a = sqrt(n);
    
    if(a == (int)a){
        answer = pow(a+1, 2);
        
    }else{
        answer = -1;
    }
    
    return answer;
}
