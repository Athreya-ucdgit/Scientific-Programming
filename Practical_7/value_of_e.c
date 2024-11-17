#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
    if(n==0){
        return 1;
    }

    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

double value_of_e(double *arr, int n){
    double sum = 1.0;
    for(int i = 1; i<=n; i++){
        sum += 1.0 / factorial(i);
        arr[i-1] = 1.0 / factorial(i);
    }
    return sum;
}

int main(void) {
    int n = 0;
    printf("Enter the order of polynomial:");
    scanf("%d",&n);

    double *polynomial_terms;
    polynomial_terms = (double *) malloc(n * sizeof(double));

    printf("The first %d polynomial terms are:\n",n);
    value_of_e(polynomial_terms,n);

    for(int i = 0; i < n; i++){
        printf("%.15f",*(polynomial_terms+i));
        printf("\n");
    }

    free(polynomial_terms);

    printf("\n\nThe estimates from the 1st order to 15th order polynomials\n");
    double *estimates_1_to_15;
    estimates_1_to_15 = (double *) malloc(15 * sizeof(double));

    for(int i = 1; i <= 15; i++){
        if(i==1){
            estimates_1_to_15[i-1] = 1.0 +  1.0 /  factorial(i);
        }
        estimates_1_to_15[i-1] = estimates_1_to_15[i-2] + 1.0 / factorial(i);
    }

    for(int i = 0; i < 15; i++){
        printf("%.15f",*(estimates_1_to_15 + i));
        printf("\n");
    }
    free(estimates_1_to_15);
}