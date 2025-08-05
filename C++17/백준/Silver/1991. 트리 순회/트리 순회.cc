#include <cstdio>
#include <vector>
#include <map>
//#include <Windows.h>

using namespace std;

struct children {
	char left;
	char right;
};

map<char, children> Node;

//루 - 왼 - 오
void preOrder(char current){
	if (current == '.') return;

	printf("%c", current);
	preOrder(Node[current].left);
	preOrder(Node[current].right);
}

//왼 - 루 - 오
void inOrder(char current) {
	if (current == '.') return;

	inOrder(Node[current].left);
	printf("%c", current);
	inOrder(Node[current].right);
}

//왼 - 오 - 루
void postOrder(char current) {
	if (current == '.') return;

	postOrder(Node[current].left);
	postOrder(Node[current].right);
	printf("%c", current);
}

int main() {
	int N;
	char now, left, right;
	scanf("%d", &N);

	//트리 만들기 
	for (int i = 0; i < N; i++) {
		scanf(" %c %c %c", &now, &left, &right);

		Node[now] = { left, right };
	}

	preOrder('A');
	printf("\n");

	inOrder('A');
	printf("\n");

	postOrder('A');

	//system("pause");
}