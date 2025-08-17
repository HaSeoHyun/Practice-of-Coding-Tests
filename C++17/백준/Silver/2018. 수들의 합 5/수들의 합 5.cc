#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);

    int sum = 1;
    int answer = 1;

    int start_idx = 1;
    int end_idx = 1;

    while (end_idx < N){
        if (sum < N){
            end_idx++;
            sum = sum + end_idx;
        }
        else if (sum > N){   
            sum = sum - start_idx;
            start_idx++;
        }

        else if (sum == N){
            answer++;
            end_idx++;
            sum = sum + end_idx;
        }
    }

    printf("%d\n", answer);

}