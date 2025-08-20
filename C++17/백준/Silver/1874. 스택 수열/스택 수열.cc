#include <cstdio>
#include <deque>

using namespace std;

deque<int> dq;
deque<char> ans; 

int main(){
    int N;
    scanf("%d", &N);

    int curr = 1;

    for (int i = 0; i<N; i++){
        int x;
        scanf("%d", &x);

        while (x > curr){
            dq.push_back(curr);
            ans.push_back('+');
            curr++;
        }

        if (x == curr){
            ans.push_back('+');
            ans.push_back('-');
            curr++;
        }

        else if (x < curr){
            if (dq.back() == x){ //제일 위면
                dq.pop_back();
                ans.push_back('-');
            } 
            else{
                printf("NO\n");
                return 0;
            }

        }

    }

    for (char c:ans) printf("%c\n", c);
    return 0;
}