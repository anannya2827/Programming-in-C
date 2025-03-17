/* Name:Anannya Abhi
   Date:17/3/25
   program to check even or not using function  */
#include<stdio.h>
int isEven(int);
int main(){
   int num,result;
   printf("Enter a number:\n");
   scanf("%d",&num);
   result=isEven(num);
   if(result==1){
      printf("Number is even!\n");
   }else{
      printf("Number is odd!\n");
   }
return 0;
}

int isEven(int n){
  if(n%2==0){
    return 1;
  }else{
    return 0;
  }
}
