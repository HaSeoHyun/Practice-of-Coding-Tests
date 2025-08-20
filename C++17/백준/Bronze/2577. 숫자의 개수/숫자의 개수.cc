#include <cstdio>
#include <string>
#include <cmath>

using namespace std;
int counts[10] = {0,}; //개수 카운트용 

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int D = A*B*C;
    string s = to_string(D);

    for (int i = 0; i<s.length(); i++){
        int x = s[i] - '0';
        counts[x]++;
    }

    for (int i = 0; i<10; i++){
        printf("%d\n", counts[i]);
    }
}