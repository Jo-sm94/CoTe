#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <iostream>

using namespace std;

int toMin(const string& time)
{
    int h = stoi(time.substr(0,2));
    int m = stoi(time.substr(3,2));
    return h * 60 + m;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    vector<vector<string>> v; //v[i][0] : 시간, v[i][1] : 차량번호, v[i][2] : 입/출차
    map<string, int> inTime; // 차량별 입차시간
    map<string, int> totalTime; //차량별 총 시간
    
    for(string s : records)
    {
        stringstream ss(s);
        string s1;
        vector<string> vs;
        
        while(getline(ss, s1, ' '))
        {
            vs.push_back(s1);
        }
        v.push_back(vs);
    }
    
    for(int i = 0; i<v.size(); ++i)
    {
        if(v[i][2] == "IN")
        {
            inTime[v[i][1]] = toMin(v[i][0]);
        }
        else//OUT
        {
            int inM = inTime[v[i][1]];
            int outM = toMin(v[i][0]);
            
            totalTime[v[i][1]] += (outM - inM);
            inTime.erase(v[i][1]);
        }
    }
    
    const int endTime = toMin("23:59");
    for(auto& inCT : inTime)
    {
        string car = inCT.first;
        int inM = inCT.second;
        
        totalTime[car] += (endTime - inM);
    }
    
    for(const auto& info : totalTime)
    {
        int fee = fees[1];
        
        if(info.second > fees[0])
        {
            int overTime = info.second - fees[0];
            int over = (overTime + fees[2] - 1) / fees[2];  
            fee += over * fees[3];
        }
        answer.push_back(fee);
    }
    
    return answer;
}
