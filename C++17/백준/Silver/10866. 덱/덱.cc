#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

deque<int> dq;

void pop_fr(){
    if (!dq.empty()){
        printf("%d\n", dq.front());
        dq.pop_front();
    }
    else printf("-1\n");
}

void pop_ba(){
    if (!dq.empty()){
        printf("%d\n", dq.back());
        dq.pop_back();
    }
    else printf("-1\n");
}

void fr(){
    if (!dq.empty()){
        printf("%d\n", dq.front());
    }
    else printf("-1\n"); 
}

void ba(){
    if (!dq.empty()){
        printf("%d\n", dq.back());
    }
    else printf("-1\n"); 
}

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 0; i<N; i++){
        char cmd[20];
        scanf("%s", &cmd);
        if (strcmp(cmd,"push_back") == 0){
            int k;
            scanf("%d", &k);
            dq.push_back(k);
        }

        else if (strcmp(cmd,"push_front") == 0){
            int j;
            scanf("%d", &j);
            dq.push_front(j);
        }

        else if (strcmp(cmd,"pop_front") == 0){
            pop_fr();
        }

        else if (strcmp(cmd,"pop_back") == 0){
            pop_ba();
        }

        else if (strcmp(cmd,"size") == 0){
            printf("%d\n", dq.size());
        }

        else if (strcmp(cmd,"empty") == 0){
            if (!dq.empty()) printf("0\n");
            else printf("1\n");
        }

        else if (strcmp(cmd,"front") == 0){
            fr();
        }  
        else if (strcmp(cmd,"back") == 0){
            ba();
        }    
    }
}