main_stub.c:
This program displays whether a square matrix read from file is a magic square or not. getlines() function retrieves the number of lines in the given file. We set n = number of rows of the matrix to the number of lines in the file. We set a array of pointers to store the matrix and each pointer is a row. We use fscanf to read from the file until EOF and input the matrix. We pass the matrix and n to isMagicSquare() function.

magic_square_stub.h:
This file contains the isMagicSquare() function. Here, we check if the sum of elements in each row, column, the main and the secondary diagonals = M. If yes, we return True. Otherwise, return False.