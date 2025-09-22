#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        vector<int> v;
        for (int j = 0; j<5; j++){
            int k;
            scanf("%d", &k);
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        if ((v[3] - v[1]) >= 4){
            printf("KIN\n");
        }
        else{
            int sum = 0;
            sum = v[1]+v[2]+v[3];
            printf("%d\n", sum);
        }
    }
}