#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int tmp;
    while(b != 0)
    {
        tmp = a%b;
        a=b;
        b=tmp;
    }
    
    return a;
}

int solution(vector<int> arr) {
    int answer = 0;

    for(int i = 1; i < arr.size(); i++)
    {
        arr[i] = (arr[i-1] * arr[i]) / gcd(arr[i-1], arr[i]);
    }
    answer = arr[arr.size()-1];
    
    return answer;
}