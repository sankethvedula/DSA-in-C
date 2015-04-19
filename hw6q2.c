#include<stdio.h>
#include<stdlib.h>

void sort_add(int a[],int n);

int B[110];
main()
{
int A[110];
srand ( time(NULL) );
int i;
        for(i=0;i<110;i++)
        {
        A[i]=rand()%(100000+1);
        }

for(i=0;i<110;i++)
{
printf("%d  ",A[i]);
}
printf("\n");
int C[100]={0};
int *list;
int n=1000;
for(i=0;i<110;i++)
{
C[A[i]/1000]++;
}
int j;
for(i=0;i<100;i++)
{
	if(C[i]>0)
	{
	list=(int*)malloc(C[i]*sizeof(int));
		int k=0;
		for(j=0;j<110;j++)
		{
			if(A[j]>=(i*1000) && A[j]<((i*1000)+1000))
			{
			list[k]=A[j];
			k++;
			}
		}
sort_add(list,C[i]);
free(list);
	}
}

for(i=0;i<110;i++)
{
printf("%d  ",B[i]);
}


}
void sort_add(int a[],int n)
{
int i,j,t;
for(i=n;i>=1;i--)
{
	for(j=0;j<i-1;j++)
	{
	if(a[j]>a[j+1])
		{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
	}
}

static int z=0;
for(i=0;i<n;i++)
{
B[z]=a[i];
z++;
}

}

