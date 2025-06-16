#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int temp = n;
    
    while(a <= n){
        
        answer += ((n / a) * b);
        n = n - ((n / a) * a) + ((n / a) * b);

    }
    return answer;
}