#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;

    string black_list = "CAMBRIDGE";

    for (char c:S){
        if (black_list.find(c) == string::npos){
            printf("%c",c);
        }
    }
}