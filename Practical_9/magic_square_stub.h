#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    
    // TODO: Checking that every row and column add up to M
    int sumR = 0; int sumC = 0; int sumMD = 0; int sumSD = 0;
    for(int i = 0; i < n; i++){
        sumR = 0; sumC = 0;
        for(int j = 0; j < n; j++){
            sumR += square[i][j];
            sumC += square[j][i];
        }

        if(sumR != M || sumC != M){
            return 0;
        }
        
        sumMD += square[i][i];
        sumSD += square[i][n-i-1];
    }

    // TODO: Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square
    if(sumMD != M || sumSD != M){
        return 0;
    }


    return 1;
}

