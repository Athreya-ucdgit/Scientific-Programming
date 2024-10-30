// TODO: Complete the inclusion of necessary libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

//TODO: Complete variable declarations
    int n; float alpha, beta;

// TODO: Enter the number of data points
    printf("Enter the number of data points:");
    scanf("%d",&n);
    float x[n], y[n];

// TODO: Enter (xi, yi) values i=1, 2, ..., n
//       Note that C array indices start from 0
    printf("Enter the inputs x(i):\n");
    for(int i = 0; i<n; i++){
        scanf("%f",&x[i]);
}
    printf("Enter the outputs y(i):\n");
    for(int i = 0; i<n; i++){
        scanf("%f",&y[i]);
}

/*
TODO: Calculate alpha and beta formulas
      Use the pow() function for the calculation of power of 2 in the formula.
      Check and exit the code if the denominator for a is equal to zero.
*/
    float alpha_numerator, alpha_denominator, beta_numerator, beta_denominator;
    float sum_x, sum_y, sum_xy, sum_x2;
    
    for(int i = 0; i<n; i++){
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
}

    alpha_numerator = n * sum_xy - sum_x * sum_y;
    alpha_denominator = n * sum_x2 - pow(sum_x,2);
    if(alpha_denominator == 0){
        printf("the denominator is zero\n");
        exit(0);
}
    alpha = alpha_numerator / alpha_denominator;

    beta_numerator = sum_y - (alpha * sum_x);
    beta_denominator = n;
    beta = beta_numerator / beta_denominator;

//TODO: Print the equation of the line 
    printf("The equation of the line is y = %f x + %f\n",alpha,beta);
    return 0;
}
