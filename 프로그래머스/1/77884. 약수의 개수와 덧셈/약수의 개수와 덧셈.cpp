#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left; i <= right; i++){
        
        int count = 0; //약수의 개수를 담을 변수
        
        for(int j = 1; j*j <= i; j++){
            
            //약수의 개수 더하기
            if(j*j == i){
                count += 1;
            }
            else if(i % j == 0){
                count += 2;                
            }
        }
    
        if(count % 2 == 0){
            answer += i;
        }
        else{
            answer -= i;
        }
        
    }

    return answer;
}