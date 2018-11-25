#include<stdio.h>

#include<string.h>

struct person
{
char name[10];
int rno;
};
typedef struct person NAME;
NAME stud[10], temp[10];

void main()
{
int no,i;
 FILE *fp;
void sort(int N); 

fp=fopen("t1.txt","w");
printf("Enter the number of students in the list\n");
scanf("%d",&no);

for(i = 0; i < no; i++)
{
printf("\nEnter the name of person %d : ", i+1);
scanf("%s",stud[i].name);
printf("\n");
printf("Enter the roll number of %d : ", i+1);
scanf("%d",&stud[i].rno);
temp[i] = stud[i];
}
fwrite(stud,sizeof(stud),1,fp);

printf (" Names before sorting \n");
printf("\n");
for(i=0;i<no;i++)
{
printf("\n");
printf("%s\t%d \n",temp[i].name,temp[i].rno);
}

sort(no); 
fwrite(stud,sizeof(stud),1,fp);

printf (" Names after sorting \n");
printf("\n");
for(i=0;i<no;i++)
{
printf("%s\t%d\n",stud[i].name,stud[i].rno);

}
fclose(fp);


} 

void sort(int N)
{
int i,j;
NAME temp;

for(i = 0; i < N-1;i++)
{
for(j = i+1; j < N; j++)
{
if(strcmp(stud[i].name,stud[j].name) > 0 )
{
temp = stud[i];
stud[i] = stud[j];
stud[j] = temp;
}
}
}

} 
