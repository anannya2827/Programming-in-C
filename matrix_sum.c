/*  Author: Anannya Abhi
    Date: 07/02/25
    Program to find sum of two matrices   */
#include<stdio.h>
int main(){
   int row,col;
   printf("Enter the row and column: ");
   scanf("%d%d",&row,&col);
   int m1[row][col],m2[row][col],matrix[row][col];
   printf("Enter the elements of first matrix:\n");
   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
         scanf("%d",&m1[i][j]);
      }
   }
   printf("Enter the elements of second matrix:\n");
   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
         scanf("%d",&m2[i][j]);
      }
   }
   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          matrix[i][j]=m1[i][j]+m2[i][j];
      }    
   }
   printf("The sum of the given matrices is:\n");
   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
         printf("%d\t",matrix[i][j]);
      }
      printf("\n");
   }
 return 0;
 }
