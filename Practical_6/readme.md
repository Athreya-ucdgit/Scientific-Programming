main.c:
This program calculates the matrix multiplication A x B = C. A matrix is n x p in size. B matrix is p x q in size. The resultant C matrix should be n x q in size. The matrixes are initialized as per the above sizes and the values are initialized. The matrixes and their sizes n , p , q are passed to a function where the matrix multiplication is calculated. Then the matrixes are printed.

matmult.c:
This file has the matMult() function declaration. main.c only has the function definition. Matrix multiplication is calculated here.

Makefile:
This folder has a makefile which will automatically compile both the .c files and generate an executable.