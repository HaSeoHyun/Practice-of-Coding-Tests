#include <string>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

priority_queue<char> pq;

int main(){
    string str;
    cin >> str;
    //printf("%s", str);
    //cout << str.length() << endl; 
    for (int i = 0; i<str.length(); i++){
        pq.push(str[i]);
    }
    for (int i = 0; i<str.length(); i++){
        printf("%c", pq.top());
        pq.pop();
    }
}