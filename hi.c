#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header1.h"
int hey();
int hi(char b[100])
{
 FILE *fp;
 int c;
 fp=fopen("hi.txt","r");
 char a[100];
 while(fgets(a,100,fp)!=NULL)
	{
		if(!strncmp(a,b,(strlen(a)-1)))
 		{	hey();
			return 0;}
		else{
			
		}
	 }
 c=how(b);
 fclose(fp);
 return 1;
}

int hey()
{ 	char a[4][200]={{"Hello"},{"Hi,How are you?"},{"Heyy!,Supp?"},{"Hello there"}};
	int c,n,b;
	srand(time(NULL));
		b=rand()%4;
		printf("\n%s\n",a[b]);
		return 0;

}