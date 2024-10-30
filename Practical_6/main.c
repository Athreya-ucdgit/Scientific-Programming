#include<stdio.h>

void matMult(int n, int p, int q, int A[n][p], int B[p][q], int C[n][q]);

int main(void) {
    int n = 5, p = 3, q = 4;
    int A[n][p], B[p][q], C[n][q];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            A[i][j] = i + j;
        }
    }

    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            B[i][j] = i - j;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            C[i][j] = 0;
        }
    }

    matMult(n, p, q, A, B, C);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
}