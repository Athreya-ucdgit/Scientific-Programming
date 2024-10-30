#include<stdio.h>
#include<math.h>

float arr[13];

float deg_to_rad(int x){
    return x * (M_PI / 180);
}

float area_under_curve(){
    float sum = arr[0] + arr[12];
    for(int i=1;i<12;i++){
        sum += 2 * arr[i];
    }
    sum  = sum * ((deg_to_rad(60) - deg_to_rad(0))/24);

    return sum;
}

int main(void) {
    for(int i = 0; i <= 12; i++){
        int deg_angle = i * 5;
        float rad_angle = deg_to_rad(deg_angle);
        arr[i] = tan(rad_angle);
    }

    float s = 0.0;
    s = area_under_curve();
    printf("Area under the curve = %f ",s);

}