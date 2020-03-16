#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header1.h"
int check(char s[100]);
int main()
{
	char input[100];
	int h;
	printf("Hello!  How can I help you?\n");
	printf("Press enter and type anything below. Type \"exit\" in case you want to leave\n");
	do
 	{
		printf("Input?\t");
		gets(input);
		strlwr(input);
		char s[100]="exit";
		if(strcmp(input,s)==0)
			{printf("Hope you have a great day!");
			exit(0);}
  		h=check(input);
   	}while(1);
 	return 0;
}
int check(char s[100])
{	int a;
  	a=hi(s);
 	return 0;
}