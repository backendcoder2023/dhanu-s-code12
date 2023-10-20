#include <stdio.h>

int main() 
{
    int T;
    scanf("%d",&T);
    while(T--){
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if ((A == 0 && B == 0 ) || (A==0 && C== 0) || (B==0 && C==0))
    {
        printf("Water filling time\n");
    } else {
        printf("Not now\n");
    }
    }
    return 0;
}
