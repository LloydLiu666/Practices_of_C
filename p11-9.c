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
int mystrncmp(char *s, char *t, int n){
	int i = 0;
	for(;*s == *t && (*s || *t) && i<n;i++){
		s++;
		t++;
	}
	if (i==n && s[n] == t[n])
		return 0;
	else if(*s - *t > 0)
		return 1;
	else if(*s - *t < 0)
		return -1;
	else
		return 0;
	//return *s - *t;
}
char *mystrcpy(char *s, char *t)
{
	for(;*t;t++)
		*s++ = *t;
	return s;
}
char *mystrncpy(char *s, char *t, int n)
{
	for(;*t;)
		*s++ = *t++;
	int i = mystrlen(s);
	if(i >= n){
		for(i--; i >= n; i--)
			s[i] = 0;
		return s;
	}
	for(;i<n;i++)
		s[i] = 0;
	return s;
}
char *mystrcat(char *s, char *t){
	for (;*s;s++)
		;
	for(;*t;t++)
		*s++ = *t;
	return s;
}
char *mystrncat(char *s, char *t, int n){
	int i = mystrlen(s);
	if(i >= n){
		for(i--; i >= n; i--)
			s[i] = 0;
		return s;
	}
	for(;*t && i < n;i++)
		s[i] = *t++;
	return s;
}
int main(){
	char s[30];
	char t[30];
	puts("s=");
	gets(s);
	puts("t=");
	gets(t);
	printf("mystrcmp for s-t:%d\n",mystrcmp(s,t));
	printf("mystrncmp for s-t,3:%d\n",mystrncmp(s,t,3));
	printf("mystrlen for s:%d\n",mystrlen(s));
	mystrcat(s,t);
	printf("mystrcat for s+t:%s\n",s);
	mystrncat(s,t,10);
	printf("mystrncat for s+t,10:%s\n",s);
	mystrcpy(s,t);
	printf("mystrcpy for s<-t:%s\n",s);
	mystrncpy(s,t,10);
	printf("mystrncpy for s<-t,10:%s\n",s);

}