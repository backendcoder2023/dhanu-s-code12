#include <stdio.h>
int main()
{
int n,i,j,c=0;
scanf("%d",&n);
int a[n][n];
for (i=0; i<n; i++)
 {
  
   for (j=0; j<n; j++)
   {
   c++;
   a[i][j]=c;
   printf("%d ",a[i][j]);
   }
   printf("\n");
   }
   return 0;
}

