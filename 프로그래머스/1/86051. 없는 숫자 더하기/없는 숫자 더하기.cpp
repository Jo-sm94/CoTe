#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    bool a = false; 
    
    for(int i = 0; i<=9; i++){
        
        for(int j = 0; j<numbers.size(); j++){
            if(i==numbers[j])
            {
                a = false;
                break;
            }else{
                a = true;
            }
        }
        
        if(a) answer += i;
        
    }
    return answer;
}