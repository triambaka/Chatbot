#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header1.h"
int append()
{
	FILE *fp1;
	char ques[100];char ans[100];
	fp1=fopen("add.txt","a");
	printf("Sorry, as of now I don't have an answer for your question\n");
	printf("However, I would love to add it to my memory for a more efficient performance\n");
	printf("Would you like to save it?");
	char answer[10];
	gets(answer);
	if(!strncmp(answer,"yes",3)){
	printf("Kindly phrase your question\n");
	gets(ques);
	fputs(ques,fp1);
	fprintf(fp1,"\n");
	printf("Kindly write the correct answer for your question \n");
	gets(ans);
	fputs(ans,fp1);
	fprintf(fp1,"\n");
	printf("Your answer has been successfully stored. We will get back to you. ");}
	else
	{
	printf("Have a great day!");}
	exit(0); 

}

 