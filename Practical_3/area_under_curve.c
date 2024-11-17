#include<stdio.h>
#include<math.h>

int main(void) {
    float a = 0;
    float b = M_PI/3;
    int n = 12;

    float sum = 0.0;

    sum += tan(a) + tan(b); // first part
    
    //12 equidistant points
    for(float i = 1; i <= n - 1; i++){
        sum += 2 * tan(a + i*(b/n));
    }

    
    sum = sum * ((b-a)/(2*n));

    printf("Area under the curve = %f\n",sum);
    printf("Log(2) = %f\n",log(2));
}