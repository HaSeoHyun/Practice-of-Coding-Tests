//첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 단, N은 홀수이다. 그 다음 N개의 줄에는 정수들이 주어진다. 
//입력되는 정수의 절댓값은 4,000을 넘지 않는다.
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
vector<int> v;

//산술평균 -  소수점 이하 첫째 자리에서 반올림한 값을 출력
void avg(int N){
    double sum = 0;
    for(double x:v) sum+=x;
    
    double avg_val = round(sum/N);
    if (avg_val == -0.0) avg_val = 0.0; 
    printf("%.0lf\n", avg_val);
}

//중앙값
void mid(int N){  //N은 홀수라고 주어짐
    //N이 5면 -> 2번 인덱스
    int mid_idx = N/2;
    printf("%d\n", v[mid_idx]);
}

//최빈값, 여러 개면 최빈값 중 2번째로 작은 것
void freq(int N){
    vector<int> cnt(8001.0);

    for(int x:v){
        cnt[x+4000]++;
    }

    int max_freq = *max_element(cnt.begin(), cnt.end());

    vector<int> candidates;
    for (int i = 0; i<8001; i++){
        if (cnt[i] == max_freq) candidates.push_back(i-4000);
    }

    if (candidates.size() > 1) printf("%d\n", candidates[1]);
    else printf("%d\n", candidates[0]);
}

//범위 
void period(int N){
    printf("%d\n", (v.back() - v.front()));

}

int main(){

    //숫자 입력받는 구간 
    int N;
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        int x = 0;
        scanf("%d", &x);
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    //printf("\n");
    avg(N);
    mid(N);
    freq(N);
    period(N);
}