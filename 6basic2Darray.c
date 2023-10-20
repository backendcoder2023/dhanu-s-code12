//6)l[2,3,4,5,6,7,8,9]
// output will be [[2,3][4,5][6,7][8,9]]	
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int column;
 printf("enter the column : ");
 scanf("%d",&column);
 int l = (int)malloc(column * sizeof(int));
 int *arr=(int)malloc((column/2)*sizeof(int));
 for(int i=0;i<column;i++)
 {
     scanf("%d",&l[i]);
  }
   int b=2 ;
   int c=0; 
   for(int i=0;i<(column/2);i++)
   {
    arr[i]=(int*)malloc(sizeof(int)*b);
    for(int j=0;j<b;j++)
    {
      arr[i][j]=*(l+c);
       c++;
    }
  }
    for(int i=0;i<(column/2);i++)
   {
     for (int j=0;j<b;j++)
     {
       printf("%d ",arr[i][j]);
      }
      printf("\n");
   }
   for(int i=0;i<column/2;i++)
   {
     free(arr[i]);
   }
  free(l);
  return 0;
}
