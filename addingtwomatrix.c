#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d %d",&r,&c);
	int arr1[r][c];
	int arr2[r][c];
	int arr3[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        scanf("%d",&arr2[i][j]);
                }
        }
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d",arr3[i][j]);
                }
		printf("\n");
        }
}






