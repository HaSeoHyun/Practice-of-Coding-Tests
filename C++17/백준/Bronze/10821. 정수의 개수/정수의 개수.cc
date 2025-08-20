#include <string>
#include <iostream>

using namespace std;

//콤마 개수+1 아닌가? 

int main(){
    string S;
    cin >> S;

    int ans = 1;
    for (int i = 0; i<S.length(); i++){
        if (S[i] == ',') ans++;
    }
    cout << ans<<'\n';
}