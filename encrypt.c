#include <stdio.h>
void encrypt(char *s)
{
	for (;*s;s++)
		*s= (( *s == 'z') ? 'a' : *s+1);
}
int main()
{
	char pwd[100];
	gets(pwd);
	//scanf("%s", pwd);
	encrypt(pwd);
	puts(pwd);
	return 0;
}