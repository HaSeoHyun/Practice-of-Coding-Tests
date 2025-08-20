#include <cstdio>
#include <vector>

using namespace std;
vector<int> v;
vector<int> prefix_sum;

int main(){
    int A, B;
    scanf("%d %d", &A, &B);

    v.push_back(0);
    for (int i = 1; v.size()<B+1; i++){
        for (int j = 1; j<=i; j++){
            v.push_back(i);
        }
    }

    prefix_sum.push_back(0);
    for (int i = 1; i<B+1; i++){
        prefix_sum.push_back(prefix_sum[i-1]+v[i]);
    }

    int answer = prefix_sum[B] - prefix_sum[A-1];
    printf("%d\n", answer);
}
