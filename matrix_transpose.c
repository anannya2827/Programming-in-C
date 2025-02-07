/*  Author: Anannya Abhi
    Date: 07/02/25
    Program to find transpose of a matrix  */
#include<stdio.h>
int main(){
   int row,col;
   printf("Enter the row and column: ");
   scanf("%d%d",&row,&col);
   int matrix[row][col];
   printf("Enter the elements:\n");
   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
         scanf("%d",&matrix[i][j]);
      }
   }
   printf("The transpose of the matrix is:\n");
   for(int i=0;i<col;i++){
      for(int j=0;j<row;j++){
         printf("%d\t",matrix[j][i]);
      }
      printf("\n");
   }
   return 0;
}      
