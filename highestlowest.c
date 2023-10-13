#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[50];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int high=arr[0];
	int secondhigh=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>high)
		{
			secondhigh=high;
			high=arr[i];
		}
	        else
		{
			if((arr[i]>=secondhigh)&&(secondhigh<high))
		        {
				secondhigh=arr[i];
			}
		}
	}
	printf("%d %d",high,secondhigh);
}


