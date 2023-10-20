#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    int max = matrix[0][0], min = matrix[0][0], sum = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }

            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }

            sum += matrix[i][j];
        }
    }

    printf("%d\n", max);
    printf("%d\n", min);
    printf("%d\n", sum);

    return 0;
}

