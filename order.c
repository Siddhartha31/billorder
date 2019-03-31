
#include<stdio.h>
#include<unistd.h>

struct student{
int no;
int order;
};
void quicksort(struct student a[10],int first,int last);

int main(){
struct student a[10];
int i;
int b[10];
 for(i=0;i<10;i++)
 {	 a[i].no=i+1;
	printf("enter the no of order of student %d\n",i+1);
	scanf("%d",&b[i]);
	a[i].order=b[i];
}
quicksort(a[10],0,9);

for(i=0;i<10;i++)
{
printf("%d\t",a[i].no);
}
}

void quicksort(struct student a[10],int first,int last){
struct student temp;
int j,pivot,i;
if(first<last)
{
pivot=first;
i=first;
j=last;
while(i<j)
{
while(a[i].order<=a[pivot].order&&i<last)
{
i++;}
while(a[j].order>a[pivot].order)
j++;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;}
}
temp=a[pivot];
a[pivot]=a[j];
a[j]=temp;
quicksort(a,first,j-1);
quicksort(a,j+1,last);
}
