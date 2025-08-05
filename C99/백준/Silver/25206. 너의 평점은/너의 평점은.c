#include <stdio.h>
#include <string.h>

struct Subject {
    char name[50];
    float num;
    char grade[3];
};
int main(){
    float total = 0;
    float all = 0;
    struct Subject s[20];
    for (int i=0; i<20; i++){
        scanf("%s %f %s", s[i].name, &s[i].num, s[i].grade);
        if (strcmp(s[i].grade, "A+") == 0){
            total += s[i].num * 4.5;
            all += s[i].num;
        }
        else if (strcmp(s[i].grade, "A0")==0){
            total += s[i].num * 4.0;
            all += s[i].num;

        }
        else if (strcmp(s[i].grade, "B+")==0){
            total += s[i].num * 3.5;
            all += s[i].num;
        }
        else if (strcmp(s[i].grade, "B0")==0){
            total += s[i].num * 3.0;
            all += s[i].num;
        }
        else if (strcmp(s[i].grade, "C+")==0){
            total += s[i].num * 2.5;
            all += s[i].num;
        }
        else if (strcmp(s[i].grade, "C0")==0){
            total += s[i].num * 2.0;
            all += s[i].num;
        }
        else if (strcmp(s[i].grade, "D+")==0){
            total += s[i].num * 1.5;
            all += s[i].num;
        }
        else if (strcmp(s[i].grade, "D0")==0){
            total += s[i].num * 1.0;
            all += s[i].num;
        }
        else if (strcmp(s[i].grade, "F")==0){
            total += s[i].num * 0.0;
            all += s[i].num;
        }

    }

    float avg = total/all;
    printf("%f", avg);
}