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
 FILE *fp,*fp1;
printf("Enter the number of students in the list\n");
scanf("%d",&no);
int arr[no];

 
fp=fopen("t11.txt","w");


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

for(i = 0; i < no; i++)
{
arr[i]=stud[i].rno;
}

mergeSort(arr,0,no);

printf("printing roll no after sorting ");

    for (i=0; i < no ; i++) 
{
        printf("\n \n student roll no --%d ", arr[i]); 
}
    printf("\n"); 

  for (i=0; i < no ; i++) 
{ 
stud[i].rno=arr[i];
}
fp1=fopen("h.txt","w");
  for (i=0; i < no ; i++) 
{
fwrite(stud,sizeof(stud),1,fp1);
}

fclose(fp1);
fclose(fp);
}
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
   
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        
        int m = l+(r-l)/2; 
  
     
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 


