#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string a = "";
    int powNum = 1;
    
    while(n != 0){
        a +=  to_string(n % 3);
        n /= 3; 
    }

    for(int i = a.length()-1; i>=0; i--){
        int digits;
        char c = a[i];
        
        digits = c - '0';
        answer += digits * powNum;
        powNum *= 3;
    }
    
    return answer;
}