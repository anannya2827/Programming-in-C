#include<stdio.h>
int main(){
   FILE *fp;
   fp=fopen("file.txt","w");
   while((ch=getc(stdin))!=EOF){//eof=end of file
       putc(ch,fp);
   }
   fclose(fp);
   fp
