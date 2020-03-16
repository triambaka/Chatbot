
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header1.h"
int how1()
{ 	char a[4][200]={{"I am fine, how are you?"},{"If I were better,there'd have to be two of me..."},{"I'm feeling like a good luck magnet today,everything is coming my way.."},{"Purely golden.."}};
	int c,n,b;
	srand(time(NULL));
		b=rand()%4;
		printf("\n%s\n",a[b]);
		return 0;

}

int how(char b[100])
{
	FILE *fp;int c;
	fp=fopen("how.txt","r");
	char a[100];
	while(fgets(a,100,fp)!=NULL)
		{
			if(!strncmp(a,b,strlen(a)-1))
			{
				//printf("... \n");
				how1();
				return 0;
				
				
			}
		}
	c=bye(b);
	fclose(fp);
	return c;
}