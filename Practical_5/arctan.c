#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float artanh1(float x,float delta){
    int i = 0;
    float element = 0.0;
    float sum = 0.0;
    while(1){
        element = pow(x,(2*i)+1)/((2*i)+1);
        sum += element;
        if(fabs(element) < delta){
            return sum;
        }
        i += 1;
    }
    return 0.0;
}

float artanh2(float x){
    return 0.5 * (log(1+x) - log(1-x));
}

int main(void) {
    float delta = 0.0;
    printf("Enter a real positive number delta:");
    scanf("%f",&delta);

    float arr1[181], arr2[181];

    int count = 0;
    for(float i = -0.9; i <= 0.9; i += 0.01){
        arr1[count] = artanh1(i,delta);
        arr2[count] = artanh2(i);
        count += 1;
    }

    for(int i = 0; i < count; i++){
        printf("%.10f   ", arr1[i]);
    }

    printf("\n\n\n\n");
    for(int i = 0; i < count; i++){
        printf("%.10f   ", arr2[i]);
    }
}