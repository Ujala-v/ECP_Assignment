#include <stdio.h>

int sumOfRow(int matrix[3][3], int row);
int sumOfColumn(int matrix[3][3], int column);

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowSum, colSum;
    int row = 1; 
    int col = 2;

    rowSum = sumOfRow(matrix, row);
    if (rowSum != -1) {
        printf("Sum of elements in row %d: %d\n", row, rowSum);
    }

    colSum = sumOfColumn(matrix, col);
    if (colSum != -1) {
        printf("Sum of elements in column %d: %d\n", col, colSum);
    }

    return 0;
}

int sumOfRow(int matrix[3][3], int row) {
    int sum = 0;
    if (row < 0 || row >= 3) {
        printf("Invalid row index.\n");
        return -1; // Indicate an error
    }
    for (int j = 0; j < 3; j++) {
        sum += matrix[row][j];
    }
    return sum;
}

int sumOfColumn(int matrix[3][3], int column) {
    int sum = 0;
    if (column < 0 || column >= 3) {
        printf("Invalid column index.\n");
        return -1; // Indicate an error
    }
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][column];
    }
    return sum;
}

