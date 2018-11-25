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
printf("Enter the number of students in the list\n");
scanf("%d",&no);
int arr[no];
int first,last,mid,x,n,flag=0;
 
fp=fopen("t11.txt","w");


for(i = 0; i < no; i++)
{
printf("\nEnter the name of person %d : ", i+1);
scanf("%s",stud[i].name);
printf("\n");
fprintf(fp,"name of student %d--%s",i,stud[i].name);
printf("Enter the roll number of %d : ", i+1);
scanf("%d",&stud[i].rno);
fprintf(fp,"roll no  of student %d--%d",i,stud[i].rno);
temp[i] = stud[i];
}


printf (" Given names are:: \n");
printf("\n");
for(i=0;i<no;i++)
{
printf("\n");
printf("%s\t%d \n",temp[i].name,temp[i].rno);
}

for(i = 0; i < no; i++)
{
arr[i]=stud[i].rno;
}

for(i = 0; i < no; i++)
{
printf("%d",arr[i]);
printf("\n");
}


printf("enter the student roll number=:");
scanf("%d",&rol);
x=rol;
first=0;
last=no-1;
 
    while(first<=last)
    {
        mid=(first+last)/2;
 
        if(x==arr[mid]){
            flag=1;
            break;
        }
        else
            if(x>arr[mid])
                first=mid+1;
            else
                last=mid-1;
    }
if (flag==1)
{
printf("found ");
}
if (flag !=1)
{
printf("not found ");
}
flag=0;
/*if(stud[i].rno==rol)
{
printf("\n\n the record is found \n");
printf("\n the name of the student ==%s",stud[i].name);
printf("\n the roll no student ==%d",stud[i].rno);
}*/

fclose(fp);
}





