#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header1.h"
#include<time.h>
int sup1()
{ 	char a[4][200]={{"Nothing much. WHat about you"},{"Answering you of course"},{"Just doing a little travelling at the speed of light. It's fun although time gets a bit sluggish in the outer galaxies"},{"Working..what about you?"}};
	int c,n,b;
	srand(time(NULL));
		b=rand()%4;
		printf("\n%s\n",a[b]);
		return 1;
	
}
int sup(char b[100])
{
 	FILE *fp;
	fp=fopen("sup.txt","r");
 	char a[100];
 	while(fgets(a,100,fp)!=NULL)
	{
		if(!strncmp(a,b,(strlen(a)-1)))
 		{ 	//printf("...	\n");
			sup1();
			return 1;
			}
 
	 }
 j(b);
 fclose(fp);
 return 1;
}
