#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the arr\n",n);
	scanf("%d",&n);
	int arr[n];
	printf("please enter the element\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for (i=0;i<n;i++)
	{
		printf("element %d at position %d= %d \n",i+1,i,arr[i]);
		
	}
	return 0;
}
