#include<stdio.h>
int main(){
   int i,size,min,max,posMin,posMax;
   printf("Enter the size of the array:");
   scanf("%d",&size);
   int number[size];
   printf("Enter the elements:");
   for(i=0;i<size;i++){
   	scanf("%d",&number[i]);
   }
   max=number[0];
   min=number[0];
   for(i=1;i<size;i++){
   	if(max>number[i]){
   	   min=number[i];
   	   max=max;
   	   posMax=i;
   	   posMin=i+1;
   	}
   	if(max<number[i] && max<=min){
   	   min=max;
   	   max=number[i];
   	   posMax=i+1;
   	   posMin=i;
   	}
   	else{
   	   max=number[i];
   	   posMax=i+1;
 
   	}
   }
   printf("The maximum is %d and minimum is %d\n",max,min);
   printf("The position of Maximum and minimum are %d and %d respectively\n",posMax,posMin);
 return 0;
}
  
