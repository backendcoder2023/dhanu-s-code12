//4)create list find the sum of all elements and mean.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int r,c,sum= 0,p=0;
 scanf("%d",&r);
 scanf("%d",&c);
 int **a =(int**)malloc(r*sizeof(int*));
 for(int j=0;j<r;j++)
 {
  a[j] = (int*)malloc(c*sizeof(int));
  for (int i=0;i<c;i++)
  {
    scanf("%d",&a[j][i]);
    sum = sum+a[j][i];
   }
 }
 printf("Sum: %d\n", sum);

    int totalElements = r * c;
    float mean = (float)sum / totalElements;
    printf("Mean: %.1f\n", mean);

    // Free allocated memory
    for (int j = 0; j < r; j++) {
        free(a[j]);
    }
    free(a);
 return 0;
}
