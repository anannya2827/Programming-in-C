#include<stdio.h>
int main(){
   FILE *fp1;
   int wordcount=0,line=0,character=0;
   fp1=fopen("sentence.txt","r");
   char a;
   while(fscanf(fp1,"%c",&a)==1){
      if(a==' '){
         wordcount++;
      }
      else if(a=='.'){
         line++;
         wordcount++;
      }
      else{
         character++;
      }
   }
   printf("\nWord count:%d",wordcount);
   printf("\nSentence count:%d",line);
   printf("\ncharacter count:%d",character+wordcount);
   fclose(fp1);
return 0;   
}

