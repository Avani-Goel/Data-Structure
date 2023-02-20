//Write a program to read and display n numbers using an array
#include<stdio.h>

void main()
{
	int arr[100],n,i;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for (i=0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("Array is:\n");
	for (i=0; i<n; i++)
		printf("%d\t",arr[i]);
}
