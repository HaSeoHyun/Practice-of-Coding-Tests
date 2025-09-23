#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string S;
    getline(cin, S);
    //cout << S << '\n';

    if (S.length() >= 2){
        int happy = 0;
        int sad = 0;
        for (int i = 0; i<S.size()-2; i++){
            if (S[i] == ':' && S[i+1] == '-'){
                if (S[i+2] == ')') happy++;
                else if (S[i+2] == '(') sad++;
            }
        }

        if (sad == 0 && happy == 0) cout << "none\n";
        else if ((sad > 0) && (happy > 0) && (happy == sad))  cout << "unsure\n";
        else if (sad < happy) cout << "happy\n";
        else cout << "sad\n";
    }
    else cout << "unsure\n";
}