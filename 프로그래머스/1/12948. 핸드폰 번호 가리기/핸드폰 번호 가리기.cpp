#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for(int i = 0; i < (phone_number.length()-4); i++){
        phone_number.replace(i, 1, "*");
    }
    
    answer = phone_number;
        
    return answer;
}