#include <stdio.h>
#define MAX 50

void mergeSort(int arr[], int low, int mid, int high);
void partition(int arr[], int low, int high);
int main()
{
	int merge[MAX],i,n;
	printf("Enter the total number of elements:\n");
	scanf("%d", &n);
	printf("Enter the elements to be sorted\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&merge[i]);
	}
	partition(merge, 0, n-1);
	printf("After merge sorting elements...\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n",merge[i]);
	}
	return 0;
}

void partition(int arr[], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid = (high+low)/2;
		printf("Before first partition the values of low = %d\n mid = %d\n high = %d\n",low,mid,high);
		partition(arr,low,mid);
		printf("Before second partition the values of low = %d\n mid = %d\n high = %d\n",low,mid,high);
		partition(arr,mid+1,high);
		printf("After second partition the values of low = %d\n mid = %d\n high = %d\n",low,mid,high);
		mergeSort(arr,low,mid,high);
	}
}
void mergeSort(int arr[], int low, int mid, int high)
{
	int i,m,k,l,temp[MAX];
	l = low;
	i = low;
	m = mid + 1;
	printf("low = %d\n",low);
	printf("mid = %d\n",mid);
	printf("high = %d\n",high);
	while((l<=mid) && (m<=high)){
		if(arr[l]<=arr[m])
		{
			temp[i] = arr[l];
			printf("l = %d\n",l);
			l++;
		}
		else{
			temp[i] = arr[m];
			printf("m = %d\n",m);
			m++;
		}
		i++;
		if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
        }
        else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
        	}
   		 }
		for(k = low; k<=high; k++)
		{
			arr[k] = temp[k];
		}
	}
}