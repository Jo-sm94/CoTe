#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const int& a, const int& b) {
    string as = to_string(a);
    string bs = to_string(b);
    
    return as + bs > bs + as;
}

string solution(vector<int> numbers) {
    string answer = "";
    
    sort(numbers.begin(), numbers.end(), compare);
    
    if(numbers[0] == 0)
    {
        return "0";
    }
    
    for(int number : numbers)
    {
        answer += to_string(number);
    }
    
    return answer;
}