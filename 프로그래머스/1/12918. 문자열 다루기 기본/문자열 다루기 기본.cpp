#include <string>
#include <vector>
#include <regex>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    regex r("^[0-9]{4}$|^[0-9]{6}$");
    answer = regex_match(s, r);
    
    return answer;
}