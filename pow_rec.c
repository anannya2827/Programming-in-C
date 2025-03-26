/* Name:Anannya Abhi
   Date:26/3/25
   program to get power of a number using recursion  */
#include<stdio.h>
int power_num(int num,int power){
   if(power==1){
      return num;
   }
   else{
      return num*power_num(num,power-1);
   }
}
int main(){
   int number,power;
   printf("Enter a number:");
   scanf("%d",&number);
   printf("Enter the power to which number is raised:");
   scanf("%d",&power);
   printf("The result of %d^%d is:%d\n",number,power,power_num(number,power));
}
