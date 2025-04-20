#include <stdio.h>

void scalarMultiplication(int rows, int cols, int matrix[rows][cols], int scalar, int result[rows][cols]) {
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            result[i][j] = matrix[i][j] * scalar;
}

void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            result[j][i] = matrix[i][j];
}

void matrixMultiplcation(int row1, int col1, int matrix1[row1][col1], int row2, int col2, int matrix2[row2][col2], int result[row1][col2]) {
    for(int i = 0; i < row1; ++i)
        for(int j = 0; j < col2; ++j) {
            result[i][j] = 0;
            for(int k = 0; k < col1; ++k)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
}

void matrixAdditon(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
}
