#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n >= a)
    {
        int post = (n/a) * b;
        n = (n%a) + post;
        answer += post;
    }
    
    return answer;
}







/*
while(a <= n){
        
        answer += ((n / a) * b);
        n = n - ((n / a) * a) + ((n / a) * b);
        
    }
    */