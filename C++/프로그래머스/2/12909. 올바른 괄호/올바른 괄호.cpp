#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = false;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    //cout << s << endl;
    int N = s.length();
    int sum = 0;
    for (int i = 0; i<N; i++){
        if (s[i] == ')') sum--;
        else if (s[i] == '(') sum++;
        
        if (sum <0) break; 
    }
    if (sum == 0) answer = true;

    return answer;
}