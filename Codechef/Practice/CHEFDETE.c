#include <stdio.h>
int tree[100000];
int main(){
	int n, x;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		tree[x] = 1;
	}
	for(int i = 0; i <= n;i++){
		if(tree[i] == 0)
		printf("%d ", i);
	}
	return 0;
} 