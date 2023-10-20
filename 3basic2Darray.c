// 3)creat list and maximum and minimum,sum.
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
  int m,n,sum=0;
  scanf("%d",&m);
  scanf("%d",&n);
  int max = INT_MIN;
  int min = INT_MAX;
  int **a=(int**)malloc(m*sizeof(int*));
  for(int i=0;i<m;i++)
  {
    a[i] = (int*)malloc(n*sizeof(int));
  }
   for(int i=0;i<m;i++)
   {
     for(int j=0;j<n;j++)
     {
       scanf("%d",&a[i][j]);
       sum = sum+a[i][j];
       if (a[i][j]>max)
       {
         max = a[i][j];
       }
         if (a[i][j]<min)
       {
        min = a[i][j];
       }
    }
  }
    printf("max is : %d\n",max);
    printf("min is : %d\n",min);
    printf("sum of element : %d\n",sum);
    for (int i=0;i<m;i++)
    {
      free(a[i]);
    }
  free(a);
 return 0;
}

 	
 
