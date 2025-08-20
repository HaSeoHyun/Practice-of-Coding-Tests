#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int T;
    scanf("%d", &T);

    for (int t = 0; t<T; t++){
        vector<int> v(10,0);  // 초기화 

        //배열 제작 
        for (int i = 0; i<10; i++){
            scanf("%d", &v[i]);
        }
        sort(v.begin(), v.end());
        printf("%d\n", v[7]);
    }
}