#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> A;

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        long long x;
        scanf("%lld", &x);
        A.push_back(x);
    }

    sort(A.begin(), A.end());

    long long answer = 0;
    long long start_idx = 0;
    long long end_idx = A.size()-1;

    for (int k = 0; k<N; k++){
        long long find = A[k];

        long long start_idx = 0;
        long long end_idx = A.size()-1;

        //투 포인터 알고리즘 시작
        while (start_idx < end_idx){
            if (A[start_idx] + A[end_idx] == find){
                if (start_idx != k && end_idx != k){
                    answer++;
                    break;
                }
                else if (start_idx == k) start_idx++;
                else if (end_idx == k) end_idx--;
            }

            else if (A[start_idx] + A[end_idx] < find){
                start_idx++;
            }
            else if (A[start_idx] + A[end_idx] > find){
                end_idx--;
            }
        }
    }

    printf("%lld", answer);
}