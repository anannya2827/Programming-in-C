/*  Author: Anannya Abhi
    Date: 19/02/25
    Program to count frequency of characters   */
#include<stdio.h>    
#include<string.h>   
int main(){
   char str[200];
   int freq[26]={0};
   printf("Enter a string(max char=20):");
   fgets(str,sizeof(str),stdin);
   for(int i=0;str[i]!='\0';i++){
       char ch=str[i];
       if (str[i]>='A' && str[i]<='Z'){
          ch=ch+32;  //convert Upper to lower
       }
       if(ch>='a'&& ch<='z'){
          freq[ch-97]++; //main logic 
       }
   }
   for(int i=0;i<26;i++){
      if(freq[i]!=0){
         printf("%c:%d\n",i+97,freq[i]);
      }
   }
return 0;
}
