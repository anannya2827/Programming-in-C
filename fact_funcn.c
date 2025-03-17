/* Name:Anannya Abhi
   Date:17/3/25
   program to find factorial using function  */
#include<stdio.h>
int factorial(int);
int main(){
   int n,f;
   printf("Enter a number:\n");
   scanf("%d",&n);
   f=factorial(n);
   printf("Factorial is:%d\n",f);
return 0;
}

int factorial(int n){
  int f=1;
  for(int i=1;i<=n;i++){
     f=f*i;
  }
return f;
}
