#include<stdio.h>
int main(){
  char value;
  printf("Enter a character:");
  value=getchar();
  //scanf("%c",&value); used to get char but there are many limitations
  printf("%c\n",value);
  printf("ASCII Code is '%c' is %d",value,value);
  return 0;
}
