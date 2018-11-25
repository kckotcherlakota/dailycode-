#include<stdio.h>
int main(){
FILE *fp1;
FILE *fp2;
char ch;
fp1=fopen("t1.txt","r");
fp2=fopen("hi.txt","w");
while(!feof(fp1)){
ch=fgetc(fp1);
fprintf(fp2,"%c",ch);}
fclose(fp1);
fclose(fp2);
    
}


