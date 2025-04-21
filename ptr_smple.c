#include<stdio.h>
int main(){
   int n=10;
   int *ptr;
   ptr = &n;
   printf("%u",ptr);
   printf("\nValue:%d",*ptr);
   return 0;
}
