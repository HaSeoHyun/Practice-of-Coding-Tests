#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

//차례대로 점수, 참가국, 학생번호
vector<pair<int, pair<int,int>>> v;

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        int score, country, stu_num;
        scanf("%d %d %d", &country, &stu_num, &score);
        v.push_back({score,{ country, stu_num}});
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b){
        return a.first > b.first;
    });

    printf("%d %d\n", v[0].second.first, v[0].second.second);
    printf("%d %d\n", v[1].second.first, v[1].second.second);

    //1, 2등이 같은 나라 출신이면
    if (v[0].second.first == v[1].second.first){
        for (int i = 2; i<N; i++){
            if (v[i].second.first != v[0].second.first){
                printf("%d %d\n", v[i].second.first, v[i].second.second);
                return 0;
            }
        }
    }
    else printf("%d %d\n", v[2].second.first, v[2].second.second);
    return 0;
}