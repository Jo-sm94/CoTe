#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int i = 0; i<arr1.size(); i++)
    {
        vector<int> temp;
        
        for(int j = 0; j < arr2[0].size(); j++)
        {
            int sum = 0;
            
            for(int k = 0; k < arr2.size(); k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            
            temp.push_back(sum);
        }
        
        answer.push_back(temp);
    }
    
    return answer;
}

/*
a11 a12 a13   b11 b12 b13       a11 b11, a12 b21, a13 b31
a21 a22 a23   b21 b22 b23       a11 b12, a12 b22, a13 b32
a31 a32 a33   b31 b32 b33       a11 b13, a12 b23, a13 b33
*/