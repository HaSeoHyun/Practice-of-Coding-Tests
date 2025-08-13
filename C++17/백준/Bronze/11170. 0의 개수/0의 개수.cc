#include <cstdio>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<string> v;

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 0; i<T; i++){
        int N, M;
        string S;
        scanf("%d %d", &N, &M);

        int answer = 0;
        for (int j = N; j<=M; j++){
            string t = to_string(j);
            S += t;
        }

        for (int k = 0; k<S.length(); k++){
            if (S[k] == '0') answer++;
        }

        printf("%d\n", answer);

    }

}