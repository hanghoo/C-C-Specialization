/*
Week 3: Peer-graded Assignment
Author: Nick
Date: 12/28/2020

Write a function that prints a table of values for sine and cosine between (0, 1)

*/
#include <stdio.h>
#include <math.h>
#define PI 3.1415
/*
print_sin_cos() function calculates sine and cosine values 
*/
void print_sin_cos(double step)
{    
    for (double i=0; i<=PI/2; i+=step)
    {
        printf("sin(%f)=%f\n", i, sin(i));
        printf("cos(%f)=%f\n", i, cos(i));
        
    }
}

int main(void)
{    
    double step = 0;
    printf("Enter the desired step (es. 0.1):\n");
    if (scanf("%lf", &step)==1)
        print_sin_cos(step);

}


