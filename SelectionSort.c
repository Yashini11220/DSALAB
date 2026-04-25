#include<stdio.h>
int main()
{
	int n,temp,minIndex;
	printf("Enter number of elements:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d elements:\n",n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	//selectiom sort logic
	for(i=0;i<n;i++)
	{
		minIndex=i;
		int j;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
			minIndex=j;
		}
		//swap
		temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++);
	printf("%d", arr[i]);
	return 0;
}
