#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> tmp;
    stringstream ss(s);
    int num;
    
    while(ss >> num)
    {
        tmp.push_back(num);
    }
    
    int maxVal = *max_element(tmp.begin(), tmp.end());
    int minVal = *min_element(tmp.begin(), tmp.end());
    
    answer = to_string(minVal) + " " + to_string(maxVal);
    
    return answer;
}