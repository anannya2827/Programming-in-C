/* Name:Anannya Abhi
   Date:17/3/25
   program to multipy numbers using function  */
#include<stdio.h>
int multiply(int,int);
int main(){
   int num1,num2,product;
   printf("Enter two numbers:\n");
   scanf("%d%d",&num1,&num2);
   product=multiply(num1,num2);
   printf("The product is:%d\n",product);
return 0;
}

int multiply (int n1,int n2){
   int prdt;
   prdt=n1*n2;
   return prdt;
}
