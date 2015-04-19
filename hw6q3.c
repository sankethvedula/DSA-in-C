#include<stdio.h>
#include<stdlib.h>
int main()
{
int l,i;
printf("enter the size of array");
scanf("%d",&l);
int *a=(int *)malloc(sizeof(int)*l);
int *b=(int *)malloc(sizeof(int)*l);
srand(time(NULL));
	for(i=0;i<l;i++)//creating array
	{
	a[i]=rand()%100001;
	printf("%d ",a[i]);
	}
printf("\n");
int p=1,j;
for(;100000/p>0;p*=10)
{
	int c[10]={0};
	for(i=0;i<l;i++)
	{
	c[(a[i]/p)%10]++;
	}

	for(i=1;i<10;i++)
	c[i]=c[i]+c[i-1];
	int k;

	for(i=l-1;i>=0;i--)
	{
	k=c[(a[i]/p)%10]--;
	b[k-1]=a[i];
	}

	for(i=0;i<l;i++)
	a[i]=b[i];//sorted array after every step

	for(i=0;i<l;i++)
	printf("%d ",a[i]);//printing after sorting every digit
	printf("\n");
}
return 0;
}
