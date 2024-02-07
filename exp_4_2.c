#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void transposeMatrix(int mat[MAX_ROWS][MAX_COLS], int transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transposed[j][i] = mat[i][j];
        }
    }
}

void printMatrix(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int transposed[MAX_COLS][MAX_ROWS];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Entered matrix:\n");
    printMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transposed, rows, cols);

    printf("\nTranspose of the matrix:\n");
    printMatrix(transposed, cols, rows);

    return 0;
}
