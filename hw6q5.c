#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int *C;
void set_bit(int i)
{
     C[i>>5] |= (1 << (i & 0x1f)); /* bitwise SHIFT, OR, AND operators */
}

void clear_bit(int i)
{
    C[i>>5] &= ~(1<<(i & 0x1f)); /* bitwise SHIFT, AND, NEGATION operators */
}

int test_bit(int i)
{
    return C[i>>5] & (1<<(i & 0x1f)); 
}

int main()
{
int i,n,k,temp,j;
printf("enter the size of array");
scanf("%d",&n);
int *a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
a[i]=i;
srand(time(NULL));
for(i=0;i<n;i++)
{
k=rand()%n;
temp=a[k];
a[k]=a[labs(k-i)];
a[labs(k-i)]=temp;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
j=n/32+1;
C=(int *)malloc(sizeof(int)*j);
for(i=0;i<j*32;i++)
clear_bit(i);
for(i=0;i<n;i++)
{
int t=a[i];
set_bit(t);
}
for(i=0;i<j*32;i++)
{
if(test_bit(i)!=0)
printf("%d ",i);
}
return 0;
}