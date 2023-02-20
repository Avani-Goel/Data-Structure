//print position of smallest element in an array
#include<stdio.h>

void main()
{
	int arr[100],n,i,small,pos=0;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for (i=0; i<n; i++)
		scanf("%d", &arr[i]);
	small=arr[0];
	for (i=0;i<n;i++)
	{
		if (arr[i]<small)
		{
			small=arr[i];
			pos=i+1;
		}
		
	}
	printf("Smallest element is: %d\n",small);
	printf("Position if smallest element is: %d",pos);
}
