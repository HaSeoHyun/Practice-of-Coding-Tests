// ljes=njak는 6 출력 
//알고리즘: 시작이 c, d, l, n, s, z면 찾아보기 

#include <stdio.h>
#include <string.h>
int main(){
    int count = 0;
    //const char *cro[] = {"c=", "c-", "dz=","d-","lj","nj","s=","z="};
    char st[100]; 
    scanf("%s", &st);

    for (int i=0; i<strlen(st); i++){
        if (st[i] == 'd' && st[i+1] == 'z' && st[i+2] == '=') {
            count++;
            i += 2; // 'd','z','=' 세 글자 처리
        }

        else if ((st[i] == 'c' || st[i] == 's' || st[i] == 'z') && (st[i+1] == '=')){  //끝이 '='으로 끝나는 경우
            count++;
            i+=1;
        }

        else if ((st[i] == 'c' || st[i] == 'd') && (st[i+1] == '-')){  //끝이 '-'으로 끝나는 경우
            count++;
            i+=1;
        }
        else if ((st[i] == 'l' || st[i] == 'n') && (st[i+1] == 'j')){  //끝이 '-'으로 끝나는 경우
            count++;
            i+=1;
        }
        else{
            count++;
        }
    }
    printf("%d", count);
    return 0;
}