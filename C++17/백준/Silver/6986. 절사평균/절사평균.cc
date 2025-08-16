#include <cstdio>
#include <algorithm>
#include <deque>
#include <cmath>

using namespace std;

deque<double> dq;
deque<double> dq_2;

int main(){
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 0; i<N; i++){
        double x;
        scanf("%lf", &x);
        dq.push_back(x);
    }

    sort(dq.begin(), dq.end());

    if (K > 0){
        for (int i =0; i<K; i++){
            dq.pop_back();
            dq.pop_front();
        }
    }

    dq_2 = dq;  

    //절사평균 
    double sum = 0;
    for (int i = 0; i<dq.size(); i++){
        sum += dq[i];
    }
    sum = sum/dq.size();
    printf("%.2f\n", round(sum*100)/100);

    //보정평균
    double min_val = dq_2[0];
    double max_val = dq_2[dq_2.size()-1];

    if (K > 0){
        for (int i =0; i<K; i++){
            dq_2.push_back(max_val);
            dq_2.push_front(min_val);
        }
    }
    double ans = 0;
    for (int i = 0; i<dq_2.size(); i++){
        ans += dq_2[i];
    }
    ans = ans/dq_2.size();
    printf("%.2f", round(ans*100)/100);
}