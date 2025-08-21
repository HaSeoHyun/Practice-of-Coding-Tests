#include <queue>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    int N;
    cin >> N;
    string S;
    cin >> S;

    int slen = S.length();

    vector<double> values(N);  //A~Z까지 값 저장
    for (int i = 0; i<N; i++){
        cin >> values[i];
    }
    deque<double> dq;

    for (char c: S){
        if ('A' <= c && c <='Z'){ //값이 알파벳이면
            dq.push_back(values[c-'A']);
        }
        else{
            double val_2 = dq.back();
            dq.pop_back();
            double val_1 = dq.back();
            dq.pop_back();

            if (c == '+') dq.push_back(val_1 + val_2);
            else if (c == '-') dq.push_back(val_1 - val_2);
            else if (c == '*') dq.push_back(val_1 * val_2);
            else if (c == '/') dq.push_back(val_1 / val_2);

        }
    }
    printf("%.2lf\n", dq.back());
    return 0;
}