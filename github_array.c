//sub of matrices
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], diff[10][10];
    int rows, cols, i, j;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Output result
    printf("Resultant matrix after subtraction:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//equal
#include <stdio.h>
int main() {
    int a[10][10], b[10][10];
    int rows, cols, i, j, flag = 1;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Compare matrices
    for (i = 0; i < rows && flag; i++) {
        for (j = 0; j < cols; j++) {
            if (a[i][j] != b[i][j]) {
                flag = 0; // Matrices are not equal
                break;
            }
        }
    }

    // Result
    if (flag)
        printf("Matrices are equal.\n");
    else
        printf("Matrices are NOT equal.\n");

    return 0;
}

//
