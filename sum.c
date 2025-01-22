#include<stdio.h>
int main(){
  int num1,num2,sum;
  printf("\nEnter two integers numbers:");
  scanf("%d%d",&num1,&num2);//'scanf'used to get value from user;"%d" used to define type of data(here int);'&'used to indicate to the address of the variable specified
  sum=num1+num2;
  printf("Sum=%d\n",sum);//'printf'used to print value;'Sum=%d\n' '%d' specifies datatype;\n for next command to be in new line 
  printf("%d+%d=%d\n",num1,num2,sum);
  return 0;
}   
