#include<stdio.h>
int main()
{
int i,j;
int row,col;
scanf("%d%d",&row,&col);
int a[row][col];
for (i=0; i<row; i++)
{ 
 for (j=0; j<col; j++)
  { 
   printf("*");
   }
   printf("\n");
}
}
