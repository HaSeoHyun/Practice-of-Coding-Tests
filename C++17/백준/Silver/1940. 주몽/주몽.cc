#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(){
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int start_idx = 0;
    int end_idx = v.size()-1;
    int count = 0;

    while (start_idx < end_idx){
        int sum = 0;
        sum = v[start_idx] + v[end_idx];
        if (sum == M){
            count++;
            start_idx++;
            end_idx--;
        }

        else if (sum < M){
            sum = 0;
            start_idx++;
            sum = v[start_idx] + v[end_idx];
        }
        else if (sum > M){
            sum = 0;
            end_idx--;
            sum = v[start_idx] + v[end_idx];
        }

    }
    printf("%d", count);
}