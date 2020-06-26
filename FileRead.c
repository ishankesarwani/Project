#include<stdio.h>
main(){
	char c;
	char ch[10];
	FILE * fp;
	fp = fopen("TestFile.txt","r");
	if(fp == NULL){
		printf("File not found");
		exit(1);
	}
	//c = fgetc(fp);
	while(fgets(ch,5,fp)!= NULL){
		printf("%s",ch);
	}
//	while(!feof(fp)){
//		printf("%c",c);
//		c = fgetc(fp);
//	}
	fclose(fp);
}
