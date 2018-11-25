#include<stdio.h>
struct person
{
char name[10];
int rno;
};
typedef struct person NAME;
NAME stud[10], temp[10];


 void main()
{
int no,i,rol;
 FILE *fp;
 //void search(int no,int rol);



fp=fopen("t11.txt","w");
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


printf (" Given names are:: \n");
printf("\n");
for(i=0;i<no;i++)
{
printf("\n");
printf("%-10s\t%3d \n",temp[i].name,temp[i].rno);
}

printf("enter the student roll number=:");
scanf("%d",&rol);

//search(no,rol);
for(i=1;i<=no;i++)
{

if(stud[i].rno==rol)
{
printf("\n\n the record is found \n");
printf("\n the name of the student ==%s",stud[i].name);
printf("\n the roll no student ==%d",stud[i].rno);
}
}

fclose(fp);

}

//void search(int no,int rol)
///{
//int i;

//}
