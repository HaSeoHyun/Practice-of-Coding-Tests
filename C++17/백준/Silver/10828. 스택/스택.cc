
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

vector <int> v;

void push(int);
void pop();
void size();
void empty();
void top();

int main(){
    int N;
    int X;
    char cmd[10];
    scanf("%d", &N);
    for (int i = 0; i<N; i++){
        scanf("%s", &cmd);

        if (strcmp(cmd, "push") == 0){
            scanf("%d", &X);
            push(X);
        }
        else if (strcmp(cmd, "pop")==0) pop();
        else if (strcmp(cmd, "size")==0) size();
        else if (strcmp(cmd, "empty")==0) empty();
        else if (strcmp(cmd, "top")==0) top();
    }
    return 0;
}

void push(int x){
    v.push_back(x);
}

void pop(){
    if (v.empty() == true) printf("-1\n");
    else{
        printf("%d\n", v.back());
        v.pop_back();
    }
}

void size(){
    printf("%d\n", v.size());
}

void empty(){
    if (v.empty() == true) printf("1\n");
    else{
        printf("0\n");
    }  
}

void top(){
    if (v.empty() == true) printf("-1\n");
    else{
        printf("%d\n", v.back());
    }    
}