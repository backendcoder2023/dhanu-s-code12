//5)given matrix l = [[1,5,3][2,7,8]],output is [[3,12,11]].

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int row,column;
	printf("enter the row : ");
	scanf("%d",&row);
	printf("enter the column : ");
	scanf("%d",&column);
	int **l=(int**)malloc(row * sizeof(int));
	for(int i=0; i<row; i++)
	{
		l[i] = (int *)malloc(column * sizeof(int));
	}
	printf("enter the elemnets:\n");
     	for(int i=0;i<row;i++)
     	{
		for (int j=0; j<column; j++)
		{
			scanf("%d",(*(l+i)+j));
		}
	}
	int **a=(int**)malloc(row*sizeof(int));
	for(int i=0; i<row; i++)
	{
		int sum=0;
		for (int j=0; j<column; j++)
		{
			sum = sum+((l+j)+i);
		}
		*(a+[i]) = sum;
	}
	
	for (int i=0; i<row; i++)
	{
		printf("sum: %d\n", *(a[i]));
	}
	free(l);
	free(a);
	printf("\n");
	return 0;
}
