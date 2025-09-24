#include <cstdio>
#include <vector>

using namespace std;
vector<int> v;

int gcd(int a, int b){
    while (b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        int x; 
        scanf("%d", &x);
        v.push_back(x);
    }

    int rule = v[0];
    for (int i = 1; i<N; i++){
        int t = 0;
        int ja = 0;
        int mo = 0;
        t = gcd(rule, v[i]);
        
        ja = rule/t;
        mo = v[i]/t;
        printf("%d/%d\n", ja, mo);
    }
}