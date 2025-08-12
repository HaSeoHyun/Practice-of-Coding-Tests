#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> v;

int main(){
    string S;
    cin >> S;

    for (int i =0; i<S.size(); i++){
        v.push_back(S.substr(i));
    }

    sort(v.begin(), v.end());

    for(auto &s : v){
        cout << s << endl;
    }
}