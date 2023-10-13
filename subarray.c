#include<stdio.h>
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[3]={3,4,5};
	int i,j,k,count=0;
	int len1=(sizeof(arr1)/sizeof(arr1[0]));
	int len2=(sizeof(arr2)/sizeof(arr2[0]));
	for(i=0;i<len1;i++)
	{
		if(arr1[i]==arr2[0])
		{
			for(k=i+1,j=1;j<len2;k++,j++)
			{
				if(arr1[k]!=arr2[j])
				{
					break;
				}
			        if(j==len2-1)
				{
					count=1;
				}
			}
			if(count==1)
			{
				printf("sub array found and it starts from %d",i);
			}
		}
	}
}

