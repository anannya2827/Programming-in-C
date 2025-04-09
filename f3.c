#include<stdio.h>
int main(){
   FILE *fp1,fp2,fp3;
   fp1=fopen("sample.txt","r");
   int num;
   while(fscanf(fp1,"%d",&num)==1){
      printf("%d\t",num);
   }
   fclose(fp1);
return 0;
}

