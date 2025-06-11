#include <string>
#include <vector>
#include <map>
#include <regex>

using namespace std;

int solution(string s) {
    int answer = 0;
    map<string, string> m;
    m.insert({"zero", "0"});
    m.insert({"one", "1"});
    m.insert({"two", "2"});
    m.insert({"three", "3"});
    m.insert({"four", "4"});
    m.insert({"five", "5"});
    m.insert({"six", "6"});
    m.insert({"seven", "7"});
    m.insert({"eight", "8"});
    m.insert({"nine", "9"});
    
    for(auto it = m.begin(); it != m.end(); ++it){

        s = regex_replace(s, regex(it->first), it->second);
    }
    answer = stoi(s);
    
    return answer;
}

    