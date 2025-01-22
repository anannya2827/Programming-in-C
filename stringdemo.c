#include<stdio.h>
int main(){
  char name[20];//array to store name
  //printf("\nEnter your  name:");
  //scanf("%s",name);//& not needed as name itself stores the address of the array?
  // above two lines will also work but not as efficient as below ones
  printf("\nEnter your  name:");
  fgets(name,sizeof(name),stdin);//fgets is used to get the string including space;name =>variable_name to which data is to be stored;stdin=>Keyboard
  printf("Welcome %s\n",name);
  return 0;
}
