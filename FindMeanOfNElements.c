//Mean of n numbers
#include<stdio.h>

void main()
{
	int arr[100],n,i,mean=0;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for (i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		mean+=arr[i];
	}
	mean=mean/n;
	printf("The mean of %d elements is: %d", n,mean);
}
