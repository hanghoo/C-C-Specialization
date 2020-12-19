/* sine value between 0 and 1 (non include) */
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void){
    double radian; // input radian value, limit in the range between 0 to PI
    printf("Enter radian between 0 to PI (non include):");
    scanf("%lf", &radian);
    printf("sine value is : %lf \n\n", sin(radian));
    return 0;
}