#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header1.h" 

int fact(char b[100]){
	if(!strncmp("fact",b,4))
	{
		FILE *f=fopen("facts.txt","r");
		char fact[100];char input[100];
		while((strncmp("no",input,2)!=0) && (fgets(fact,100,f)!=NULL)) 
		{	printf("%s",fact);
			if(!feof(f)){
			printf("Want another one?");
			gets(input);
			strlwr(input);}}
			printf("\n");
			return 0;
	}append();}
int j(char b[100]){
	if(!strncmp("joke",b,4))
	{
		FILE *f=fopen("jokes.txt","r");
		char joke[100];char input[100];
		while((strncmp("no",input,2)!=0) && (fgets(joke,100,f)!=NULL)) 
		{	printf("%s",joke);
			fgets(joke,100,f);
			clock_t start_time = clock(); 
			while (clock() < start_time + 3000) 
        		;
			printf("\t\n\n\n");
			printf("%s",joke);
			if(!feof(f)){
			printf("Want another one?");
			gets(input);
			strlwr(input);}}fclose(f);
			return 0;
	}
	fact(b);}