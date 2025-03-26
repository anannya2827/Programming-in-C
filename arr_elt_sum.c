/* Name:Anannya Abhi
   Date:26/3/25
   program to get power of a number using recursion  */
#include<stdio.h>
int sum(int arr1[],int size){
   int sum=0;
   for(int i=0;i<size;i++){
      sum=arr1[i]+sum;
   }
   return sum;
}
int main(){
  int size;
  printf("Enter the size of array:");
  scanf("%d",&size);
  int arr1[size];
  printf("Enter elements of array:");
  for(int i=0;i<size;i++){
     scanf("%d",&arr1[i]);
  }
  int result=sum(arr1,size);
  printf("The sum of elements of array is:%d\n",result);
 return 0; 
}
