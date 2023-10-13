#include<stdio.h>
int main()
{
	int i,j,pos,ele;
	scanf("%d %d",&pos,&ele);
	int arr1[5]={1,2,3,4,5};
        int arr2[5];
	int len1=(sizeof(arr1))/(sizeof(arr1[0]));
	int len2=(sizeof(arr2))/(sizeof(arr2[0]));
        for(i=0,j=0;i<pos;i++,j++)
	{
		arr2[j]=arr1[i];
	}
	arr2[j]=ele;
	j=j+1;
	for(i,j;i<len1;i++,j++)
	{
		arr2[j]=arr1[i];
	}
	len2++;
	for(i=0;i<len2;i++)
	{
	printf("%d",arr2[i]);
	}
}


