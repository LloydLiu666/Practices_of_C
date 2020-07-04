#include <stdio.h>
int mystrlen(char *s){
	char *t = &s[0];
	for (;*s;s++)
		;
	//while(*s)s++;
	return s - t;
}
int mystrcmp(char *s, char *t){
	for(;*s == *t && (*s || *t);s++)
		t++;
	if(*s - *t > 0)
		return 1;
	else if(*s - *t < 0)
		return -1;
	else
		return 0;
	//return *s - *t;
}
void mystrcat(char *s, char *t){
	for(;*s;s++)
		;
	//s += mystrlen(s);
	for(;*t;t++)
		*s++ = *t;
}
int main(){
	char s[30];
	char t[30];
	puts("s=");
	gets(s);
	puts("t=");
	gets(t);
	printf("mystrcmp for s-t:%d\n",mystrcmp(s,t));
	printf("mystrlen for s:%d\n",mystrlen(s));
	mystrcat(s,t);
	printf("mystrcat:%s\n",s);
}