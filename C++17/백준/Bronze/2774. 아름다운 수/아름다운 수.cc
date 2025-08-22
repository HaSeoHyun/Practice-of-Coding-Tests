#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    int T;
    cin >> T;
    for (int t = 0; t<T; t++){
        string X;
        cin >> X;

        set<char> s;
        for (int i = 0; i<X.length(); i++){
            s.insert(X[i]);
        }
        printf("%d\n", s.size());
    }
}