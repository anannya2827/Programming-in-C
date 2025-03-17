/* Name:Anannya Abhi
   Date:17/3/25
   program to generate prime nos till n using function  */
#include<stdio.h>
int prime(int);
int main(){
   int n,p;
   printf("Enter a limit:\n");
   scanf("%d",&n);
   for (int i=2;i<=n;i++){
      if(prime(i)==1){
        printf("%d\t",i);
      }
   }
return 0;
}

int prime(int n){
   for(int i=2;i<=n/2;i++){
     if(n%i==0){
        return 0;
     }else{
        return 1;
     }
   }
}
