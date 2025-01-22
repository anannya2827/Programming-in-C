#include<stdio.h>
int main(){
  float num1,num2,sum;
  printf("\nEnter two floating point numbers:");
  scanf("%f%f",&num1,&num2);
  sum=num1+num2;
  printf("Sum=%f\n",sum);
  printf("%f+%f=%f\n",num1,num2,sum);
  return 0;
}   
