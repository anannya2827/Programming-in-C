/*  Author: Anannya Abhi
    Date: 19/02/25
    Program to compare two strings  */
#include<stdio.h>    
#include<string.h>   
int main(){
    char str1[20],str2[20];
    int length=0,i,j,value;
    printf("Enter first string(max char=20):\n");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string(max char=20):\n");
    fgets(str2,sizeof(str2),stdin);
    value=strcmp(str1,str2);
    if (value==0){
       printf("The strings are equal!\n");  
    }else{
       printf("The strings are not equal!\n");
    }
    return 0;
 }   
