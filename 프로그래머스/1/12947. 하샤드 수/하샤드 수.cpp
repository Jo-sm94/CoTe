#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int hap = 0;
    int tmp = x;
    
    while(tmp > 0){
        hap += tmp%10;
        tmp = tmp/10;
    }
    
    if(x%hap == 0 ){
        answer = true;
    }else{
        answer = false;
    }
    
    return answer;
}