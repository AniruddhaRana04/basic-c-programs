// program to multiply two matrices in C
#include <stdio.h>
#include <conio.h>

void main() {
    int m1, n1, m2, n2, i, j, k;
    int a[20][20], b[20][20], c[20][20];
    printf("Enter the number of rows for first matrix : ");
    scanf("%d", &m1);
    printf("Enter the number of columns for first matrix: ");
    scanf("%d", &n1);
    printf("Enter the number of rows for second matrix : ");
    scanf("%d", &m2);
    printf("Enter the number of columns for second matrix: ");
    scanf("%d", &n2);
    if (n1 != m2) {
        printf("Matrices cannot be multiplied\n");
    } else {
        printf("Enter the elements of first matrix: ");
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n1; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix: ");
        for (i = 0; i < m2; i++) {
            for (j = 0; j < n2; j++) {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n2; j++) {
                c[i][j] = 0;
                for (k = 0; k < n1; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Product of two matrices: \n");
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n2; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    getch();
}