#include<stdio.h>
int main()
{
	int arr1[5]={0,1,2,3,4};
	int arr2[5]={5,6,7,8,9};
	int len1=(sizeof(arr1))/(sizeof(arr1[0]));
	int len2=(sizeof(arr2))/(sizeof(arr2[0]));
        int arr3[len1+len2];
	int len3=(sizeof(arr3))/(sizeof(arr3[0]));
        int i,j;
        for(i=0;i<len1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(i,j=0;j<len2;i++,j++)
        {
		arr3[i]=arr2[j];
	} 
	for(i=0;i<len3;i++)
	{
		printf("%d",arr3[i]);
	}
}

