#include <string>
#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    while (T--){
        int answer = 0;
        string S;
        cin >> S;
        int alphabet[26] = {0,};
        for (char x: S){
            int k = x - 'A';
            alphabet[k] = 1;
        }
        for (int i = 0; i<26; i++){
            if (alphabet[i] == 0){
                answer += (i+65);
            }
        }
        cout << answer << '\n';
    }
}