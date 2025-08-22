#include <string>
#include <iostream>

using namespace std;

int main(){
    
    int N;
    string S;
    cin >> N;
    cin >> S;

    //*가 있는 위치 찾기 - 얘 인덱스가 imp_idx
    int imp_idx;
    for (int i = 0; i<S.length(); i++){
        if (S[i] == '*'){
            imp_idx = i;
            break;
        }
    }

    string pre = S.substr(0,imp_idx);
    string post = S.substr(imp_idx+1);

    //테스트케이스 시작 
    for (int T = 0; T<N; T++){
        int fg = 1; //이게 0이면 NO, 1이면 YES
        string Tests;
        cin >> Tests;
        
        if (Tests.length()+1 < S.length()) fg = 0;

        else{
            if (Tests.substr(0, pre.size()) != pre) fg = 0;
            if (Tests.substr(Tests.size() - post.size()) != post) fg = 0;
        }

        if (fg == 1) printf("DA\n");
        else if (fg == 0) printf("NE\n");
    }
}