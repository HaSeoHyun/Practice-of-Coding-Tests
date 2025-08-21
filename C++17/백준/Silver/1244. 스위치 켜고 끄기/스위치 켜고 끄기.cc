#include <cstdio>
#include <vector>

using namespace std;
vector<int> v;

void boy(int n){
    int mok = 1;
    while (mok * n < v.size()){
        if (v[mok*n] == 1) v[mok*n] = 0;
        else if (v[mok*n] == 0){
            v[mok*n] = 1;
        }
        mok++;
    }
}

void girl(int n){
    int i = 1;
    //일단 초기 바꾸기
    v[n] = 1 - v[n];
    while ((n+i < v.size()) && (n-i > 0)){
        if (v[n+i] != v[n-i]) break;
        else{
            v[n-i] = 1-v[n-i];
            v[n+i] = 1-v[n+i];
            i++;
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);
    v.push_back(3); //일단 v[0]을 채우자 
    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }

    //학생 수 받기 
    int StudentNum; 
    scanf("%d", &StudentNum);
    for (int i = 0; i<StudentNum; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 1){
            boy(b);
        }
        else if (a == 2){
            girl(b);
        }
    }

    for (int j = 1; j<v.size(); j++){
        printf("%d ", v[j]);
        if ((j % 20) == 0 ) printf("\n");
    }
}