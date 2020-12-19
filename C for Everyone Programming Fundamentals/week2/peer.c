#include<iostream>
#include<math.h>
int main(void)
{
    double value;
    double result;
   
    printf("Enter value:");
    scanf("%if",&value);
    
    if(value>0 && value<1)
{   
 printf("the sine of %if is %if\n",value,sin(value));
}
else
{ 
  printf("wrong input, try again\n);
}
retrun 0;

}