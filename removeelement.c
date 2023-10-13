#include<stdio.h>
int main()
{
	int i,pos;
	scanf("%d",&pos);
	int arr[5]={1,2,3,4,5};
	int len=(sizeof(arr))/(sizeof(arr[0]));
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=pos+1;i<len;i++)
	{
		arr[i-1]=arr[i];
	}
	--len;
	for(i=0;i<len;i++)
        {
          printf("%d",arr[i]);
        }
}


