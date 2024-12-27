#include<stdio.h>
#include<string.h>

char s1[10];
char s2[]="ola mundo";

int main(){
	strncpy(s1,s2,3);
	s1[3]='\0';
	printf("s1: %s\n",s1);
	return 0;
}
