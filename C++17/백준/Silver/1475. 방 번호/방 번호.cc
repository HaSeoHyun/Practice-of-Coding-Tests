/*
0~9번이 한 세트지만, 9와 6은 상호 같은 걸로 처리
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    string N;
    cin >> N;

    vector<int> cnt(10,0);
    for (char c:N) cnt[c-'0']++;

    //6, 9번 처리
    cnt[6] = (cnt[6]+cnt[9]+1)/2;
    cnt[9] = 0;

    int ans = *max_element(cnt.begin(), cnt.end());
    printf("%d", ans);
}