#include <cstdio>
#include <vector>

using namespace std;

long long gcd(long long a, long long b){
    long long k;
    
    while (b != 0){
        k = a%b;
        a = b;
        b = k;
    }
    return a;
}

int main(){
    long long n;
    scanf("%lld", &n);
    for (long long i = 0; i<n; i++){
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long t = gcd(a, b);
        long long answer = a*b/t;
        printf("%lld\n", answer);
    }
}