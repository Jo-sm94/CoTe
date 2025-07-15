#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, int> id;
    map<string, int> m;
    vector<vector<string>> vec(id_list.size());
    
    //중복신고 제거
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()),report.end());
    
    //초기화
    for(int i = 0; i < id_list.size(); i++)
    {
        id[id_list[i]] = i;
        m[id_list[i]] = 0;
        answer.push_back(0);
    }
    
    for(string s : report)
    {
        string a;
        string b;
        
        stringstream ss(s);
        ss >> a >> b;
        m[b]++;
        vec[id[b]].push_back(a);
    }
    
    for(string s : id_list)
    {
        if(m[s] >= k)
        {
            for(string who : vec[id[s]])
            {
                answer[id[who]]++;    
            }
        }
    }
    
    return answer;
}