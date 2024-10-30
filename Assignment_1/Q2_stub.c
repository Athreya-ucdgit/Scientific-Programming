#include <stdio.h>

/*
TODO: Write function declaration 
      for the calculation of the determinant of 3x3 matrix
*/

float getdet(float minor[3][3]);

int main(void) {

//TODO: Complete variable declarations
float hmat[4][4];

//TODO: Initialise Hilbert matrix and print
   
for(int i = 1; i <= 4; i++){
	for(int j = 1;j <= 4; j++){
		hmat[i-1][j-1] = 1 / (float) (i+j-1);
	}
}

//TODO: Find determinant of 4x4 Hilbert matrix using Cramer rule
float minor1[3][3] = {{hmat[1][1],hmat[1][2],hmat[1][3]},{hmat[2][1],hmat[2][2],hmat[2][3]},{hmat[3][1],hmat[3][2],hmat[3][3]}};
float first_term = hmat[0][0] * getdet(minor1);
float minor2[3][3] = {{hmat[1][0],hmat[1][2],hmat[1][3]},{hmat[2][0],hmat[2][2],hmat[2][3]},{hmat[3][0],hmat[3][2],hmat[3][3]}};
float second_term = hmat[0][1] * getdet(minor2);
float minor3[3][3] = {{hmat[1][0],hmat[1][1],hmat[1][3]},{hmat[2][0],hmat[2][1],hmat[2][3]},{hmat[3][0],hmat[3][1],hmat[3][3]}};
float third_term = hmat[0][2] * getdet(minor3);
float minor4[3][3] = {{hmat[1][0],hmat[1][1],hmat[1][2]},{hmat[2][0],hmat[2][1],hmat[2][2]},{hmat[3][0],hmat[3][1],hmat[3][2]}};
float fourth_term = hmat[0][3] * getdet(minor4);
float determinant = first_term + third_term - second_term - fourth_term;

//TODO: Print calculated determinant
printf("The determinant is %.11f\n",determinant);
return 0;
}

//TODO: Complete function definition to get determinant  

float getdet(float minor[3][3]) {
	float first_term = minor[0][0] * minor[1][1] * minor[2][2];
	float second_term = minor[0][1] * minor[1][2] * minor[2][0];
	float third_term = minor[0][2] * minor[1][0] * minor[2][1];
	float fourth_term = minor[0][0] * minor[1][2] * minor[2][1];
	float fifth_term = minor[0][1] * minor[1][0] * minor[2][2];
	float sixth_term = minor[0][2] * minor[1][1] * minor[2][0];
	return first_term + second_term + third_term - fourth_term - fifth_term - sixth_term;
}


