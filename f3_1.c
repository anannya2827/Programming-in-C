#include<stdio.h>
int main(){
   FILE *fp1,*fp2,*fp3;
   fp1=fopen("sample.txt","r");
   fp2=fopen("odd.txt","w");
   fp3=fopen("even.txt","w");
   int num;
   while(fscanf(fp1,"%d",&num)==1){
      if(num%2==0){
         fprintf(fp3,"%d",num);//even
      }
      else{
         fprintf(fp2,"%d",num);//odd
      }
   }
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
return 0;
}

