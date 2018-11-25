#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
int a=0,k=0,m=0;
char ch;
fp=fopen("temp.txt","r");
while(!feof(fp)){
ch=fgetc(fp);
printf("%c\n",ch);
a++;
if(ch==' '){
k++;}
else if(ch=='\n'){
m++;}}
printf("the total no of charcters is %d\n",a-3);
printf("the total no of spaces is %d\n",k);
printf("the no of new line characters is %d",m-1);
fclose(fp);}
