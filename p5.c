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
int no,i,pp,at;
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
printf("%-10s\t%3d \n",temp[i].name,temp[i].rno);
}
 printf("enter the student roll:");
 scanf("%d",&pp);
for(i=0;i<no;i++)
{
 if(pp==stud[i].rno)
{
  printf("enter 1 to change name and 2 to enter roll ");
  printf("enter your  input : ");
  scanf("%d",&at);
 if(at==1)
{
  printf("\nEnter the name of person %d : ", i+1);
  scanf("%s",stud[i].name);
}
if (at==2)
{
  printf("\n");
 printf("Enter the roll number of %d : ", i+1);
  scanf("%d",&stud[i].rno);
}
}
}

for(i=0;i<no;i++)
{
printf("\n");
printf("%-10s\t%3d \n",stud[i].name,stud[i].rno);
}


fclose(fp);


} 


