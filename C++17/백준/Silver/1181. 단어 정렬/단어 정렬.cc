#include <string>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void comp_words(string A, string B){
    
}

int main(){
    int N;
    cin >> N;

    //중복 제거용 set 선언 
    set<pair<int, string>> dict;

    for(int i = 0; i<N; i++){
        string S;
        cin >> S;
        dict.insert({(int)S.length(), S});
    }

    for (auto &p: dict){
        cout << p.second << "\n";
    }

}