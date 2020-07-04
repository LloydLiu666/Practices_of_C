#include <stdio.h>
int str_chnum(const char *s, int c){
	int count = 0;
	for (;*s;s++){
	if(*s == 'c')
		count++;
	}
	return count;
}
int main(){
	char *s = "abcabc";	
	printf("%d\n", str_chnum(s,0));
}