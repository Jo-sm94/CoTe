#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    while(true){
        
        answer.push_back(n);
        
        if(n == 1)
        {
            break;
        }
        else if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (n*3)+1;
        }
    }

    
    return answer;
}