#include<stdio.h>
int main()
{
	int n,i,search,found=0;
	//input number of elements in the array
	printf("Enter number of elemens inthe arrya:");
	scanf("%d",&n);
	int arr[n];
	//input array elements
	printf("Enter elemen of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	//input the element to search
	printf("Enter element to search:");
	scanf("%d",&search);
	//Linear search
	for(i=0;i<n;i++)
	{
		if(arr[i]==search){
		found=1;
		printf("Element %d found at index%d.\n",search,i);
		break;	
		}
	}
	//if element is not found
	if(!found)
	{
		printf("Element %d not found in the array.\n",search);
	}
	return 0;
}
