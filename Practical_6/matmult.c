void matMult(int n, int p, int q, int A[n][p], int B[p][q], int C[n][q]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            for(int k = 0; k < p; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}