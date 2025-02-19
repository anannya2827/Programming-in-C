/*  Author: Anannya Abhi
    Date: 19/02/25
    Program to reverse a string  */
#include<stdio.h>    
int main(){
    char str1[20],str2[20];
    int length=0,i,j;
    printf("Enter a string(max char=20):\n");
    fgets(str1,sizeof(str1),stdin);
    for(i=0;str1[i]!='\0';i++);
        length=i-1;   
    for(j=0;j<i;j++){
       str2[j]=str1[length];
       length=length-1;
    }
    str2[j]='\0';
    printf("The reversed string is:");
    puts(str2);

return 0;
}
