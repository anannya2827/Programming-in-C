/* Name:Anannya Abhi
   Date:26/3/25
   program to get power of a number using recursion  */
#include<stdio.h>
#define PI 3.14159
int main(){
   float cy_r,ar_cle,ar_cy,hght;
   printf("Enter a radius of circle:");
   scanf("%f",&cy_r);
   printf("Enter a height of cylinder:");
   scanf("%f",&hght);
   ar_cle=PI*cy_r*cy_r;
   ar_cy=2*PI*cy_r*hght+(2*ar_cle);
   printf("Area of circle is:%f\nArea of cylinder is:%f\n",ar_cle,ar_cy);
return 0;
}
