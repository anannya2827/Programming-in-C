#include<stdio.h>
int main(){
   int i,size,check;
   printf("Enter the size of the array:");
   scanf("%d",&size);
   int number[size];
   printf("Enter the elements:");
   for(i=0;i<size;i++){
   	scanf("%d",&number[i]);
   }
   printf("Enter the key to be searched:");
   scanf("%d",&check);
   for(i=0;i<size;i++){
   	if(number[i]==check){
   	   printf("The key %d is found at position:%d\n",check,i+=1);
   	}
   }
 return 0;
}

