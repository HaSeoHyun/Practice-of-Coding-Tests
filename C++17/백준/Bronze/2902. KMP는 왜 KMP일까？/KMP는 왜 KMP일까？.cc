#include <cstdio>
#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;

    for (int i = 0; i<S.length(); i++){
        if (isupper(S[i]) != 0) cout << S[i];
    }
}