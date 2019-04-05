
#include<stdio.h>
#include<unistd.h>

struct student{
int no;
int order;
};


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
struct student temp;
int j;
for (i=0;i<9;i++)
{
	for(j=0;j<9-i;j++)
	{
		if(a[j].order<a[j+1].order)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	
}
printf("the bill order of the students is:\t");
for(i=0;i<10;i++)
{
	printf("%d\t",a[i].no);
}
}
