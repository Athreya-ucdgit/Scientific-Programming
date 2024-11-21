#include<stdio.h>

int gcd_iterative(int a, int b){
    int temp = 0;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd_recursive(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd_recursive(b, a % b);
}

int main(void){
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    int gcd_1 = gcd_iterative(a,b);
    int gcd_2 = gcd_recursive(a,b);

    printf("Iterative GCD:%d\n", gcd_1);
    printf("Recursive GCD:%d\n", gcd_2);
}

