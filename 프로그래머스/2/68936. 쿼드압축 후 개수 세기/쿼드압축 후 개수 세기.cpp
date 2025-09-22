#include <string>
#include <vector>

using namespace std;

int zeroCount = 0;
int oneCount = 0;

void quad(int x, int y, int size, const vector<vector<int>>& arr)
{
    int first = arr[x][y];
    bool isSame = true;
    
    for(int i = x; i < x + size; ++i)
    {
        for(int j = y; j < y + size; ++j)
        {
            if(first != arr[i][j])
            {
                isSame = false;
                break;
            }
        }
    }
    
    if(isSame)
    {
        if(first == 0) zeroCount++;
        if(first == 1) oneCount++;
    }
    else
    {
        int half = size/2;
        
        quad(x, y, half, arr);
        quad(x+half, y, half, arr);
        quad(x, y+half, half, arr);
        quad(x+half, y+half, half, arr);
    }
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    
    quad(0, 0, arr.size(), arr);
    
    answer.push_back(zeroCount);
    answer.push_back(oneCount);
    
    return answer;
}