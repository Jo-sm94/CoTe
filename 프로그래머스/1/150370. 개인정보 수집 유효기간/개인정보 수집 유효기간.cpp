#include <string>
#include <vector>
#include <iostream>

using namespace std;


vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int toYear = stoi(today.substr(0,4));
    int toMonth = stoi(today.substr(5,7));
    int ToDays = stoi(today.substr(8,10));
    int totalToday = (toYear * 12 * 28) + (toMonth * 28) + ToDays;
    
    for(int i = 0; i < privacies.size(); i++)
    {
        int year = stoi(privacies[i].substr(0,4));
        int month = stoi(privacies[i].substr(5,7));
        int day = stoi(privacies[i].substr(8,10));
        string term = privacies[i].substr(11);
        string termMonth = "";
        for(string s : terms)
        {
            if(s.find(term) != std::string::npos)
            {
                termMonth = s;
                termMonth.erase(0, 2);
                break;
            }
        }
    
        int totalUseDay = (year * 12 * 28) + (month * 28) + day + (stoi(termMonth) * 28);
        
        if(totalToday >= totalUseDay)
        {
            answer.push_back(i+1);
        }
    }
        
    
    
    return answer;
}
