#include <cstdio>

using namespace std;

int main(){
    int first;
    scanf("%d", &first);
    if (first == 1){
        for (int i = 2; i<=8; i++){
            int x;
            scanf("%d", &x);
            if (x != i){
                printf("mixed\n");
                return 0;
            }
        }
        printf("ascending");
        
    }

    else if (first == 8){
        for (int i = 7; i>=2; i--){
            int x;
            scanf("%d", &x);
            if (x != i){
                printf("mixed\n");
                return 0;

            }
        }
        printf("descending\n");
    }
    else printf("mixed\n");
    return 0;
}