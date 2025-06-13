#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "0";

    for(int i = food.size()-1; i > 0; i--){
        
        if(food[i] > 1){
            int foodAmount = food[i] / 2;
            for(int j = 0; j < foodAmount; j++){
                answer = answer + to_string(i);
                answer = to_string(i) + answer;
            }
        }
    }
    
    return answer;
}