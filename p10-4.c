#include <stdio.h>
void set_idx(int *v,int n){
	for(int i = 0; i < n; i++)
		v[i] = i;
}
int main(){
	int n = 5;
	int v[n];
	set_idx(v,n);
	for (int i = 0; i < n; i++)
		printf("%d  ", v[i]);
	printf("\n");
}