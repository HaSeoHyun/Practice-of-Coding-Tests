#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    char cmd;
    cin >> A >> cmd >> B;

    if (cmd == '*') {
        cout << "1";
        for (int i = 0; i < (A.size() - 1) + (B.size() - 1); i++)
            cout << "0";
        cout << "\n";
    } else { // '+'
        if (A.size() < B.size()) swap(A, B); // 항상 A가 더 긴 수

        int diff = A.size() - B.size();
        string result = A;
        result[diff] = (A[diff] == '0' && B[0] == '1') ? '1' : '2'; 
        // 사실 여기선 무조건 하나만 1이므로 그냥 '1'로 바꿔도 됨
        cout << result << "\n";
    }
}