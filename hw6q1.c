#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
int i;
int c[1000001];
for(i=0;i<1000001;i++)
c[i]=0;
printf("enter the size of the array");
scanf("%d",&n);
int *o=(int *)malloc(sizeof(int)*n);
srand(time(NULL));
for(i=0;i<n;i++)
{
o[i]=rand()%1000001;
c[o[i]]+=1;
//printf("%d %d  ",o[i],c[o[i]]);
}
int k=0,j;
for(i=0;i<1000001;i++)
{
if(c[i]>0)
{
for(j=0;j<c[i];j++)
o[k++]=i;
}
}
for(i=0;i<n;i++)
{
printf("%d ",o[i]);
}
return 0;
}