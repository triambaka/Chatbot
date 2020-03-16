#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "header1.h"
void bye1()
{ 	char c[4][200]={{"Bye, it was nice talking to you "},{"Bye for now, Call me when you need something "},{"Au revoir...That's goodbye in French"},{"See you later"}};
	int n,b;
	srand(time(NULL));
		b=rand()%4;
		printf("\n%s\n",c[b]);
	
}
int bye(char b[100])
{
 FILE *fp;
 fp=fopen("bye.txt","r");
 
 int i;
 char a[100];
 while(fgets(a,100,fp)!=NULL)
	{	
		if(!strncmp(a,b,(strlen(b))))
 		{ 	
			bye1();
			return 0;
			
			}
			
 
	 }
i=sup(b);
fclose(fp);
return 1;
}

