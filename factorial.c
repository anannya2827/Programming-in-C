#include<stdio.h>
int main(){
   int number,fact=1;
   printf("Enter a positive integer number: ");
   scanf("%d",&number);
   if(number>0){
      while(number>0){
        fact=fact*number;
        number=number-1;
        }
      printf("The factorial is:%d",fact); 
         
   }
   else{
      printf("Input a positive integer number");
   }
   return 0;
 }
