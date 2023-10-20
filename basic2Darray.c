#include <stdio.h>
#include <stdlib.h>
int main()
{
 int r,c;
 scanf("%d%d",&r,&c);
 int **a=(int**)malloc(r*sizeof(int*));
 for(int i=0; i<r; i++)
 {
 a[i]=(int*)malloc(c*sizeof(int));
 for (int j=0; j<c; j++)
 {
   scanf("%d",(*(a+i)+j));
   }
   }
    
   for(int i=0; i<r; i++)
   {
     
    int p=0;
    for (int j=0; j<c; j++)
    {
     p=p/(*(*(a+i)+j));
    }
     printf("%d\n",p);
     }
      
     printf("\n");
     
}
