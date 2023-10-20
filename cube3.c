#include <stdio.h>

int main()
{
    int size = 6;
    int arr[size][size];
    int N = size - 1;
    int num = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < size / 2; i++, N--)
    {
        for (j = i; j <= N; j++, num++)
        {
            arr[i][j] = num;
        }
        for (j = i + 1; j <= N; j++, num++)
        {
            arr[j][N] = num;
        }
        for (j = N - 1; j >= i; j--, num++)
        {
            arr[N][j] = num;
        }
        for (j = N - 1; j > i; j--, num++)
        {
            arr[j][i] = num;
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

