 #include <stdio.h>
int main()
{
 int arr1[]={1,2,3,4,5};
 int arr2[]={2,3,8,5,1};
 int n= sizeof(arr1)/sizeof(arr1[0]);
 int n1=sizeof(arr2)/sizeof(arr2[0]);
 int arr3[n+n1];
 //int n2=sizeof(arr3)/sizeof(arr3[0]);
 int c=0;
 for (int i=0; i<n; i++)
 { 
   arr3[c]=arr1[i];
   c++;
  }
   for (int j=0; j<n1; j++)
    {
       arr3[c]=arr2[j];
       c++;
      }
      for (int i=0; i<c; i++)
      
      {
       printf("%d ",arr3[i]);
       printf("\n");
       }
       for(int i=0; i<c; i++)
       {
       
       for (int s=i+1; s<c; s++)
       {
        if(arr3[i]==arr3[s])
        {
          printf("%d  ",arr3[s]);
          }
        }
       } 
       return 0;
}
 
 
 
