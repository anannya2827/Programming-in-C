#include<stdio.h>
int main(){
   int row,col,sum;
   printf("Enter the row and column of a square matrix:: ");
   scanf("%d%d",&row,&col);
    if(row==col){
	   int matrix[row][col];
	   printf("Enter the elements:");
	   for(int i=0;i<row;i++){
	      for(int j=0;j<col;j++){
		 scanf("%d",&matrix[i][j]);
		 if(i==j){
		    matrix[i][j]=0;
		 }
	      }
	   }
	   printf("\nThe matrix is:\n");
	   for(int i=0;i<row;i++){
	      for(int j=0;j<col;j++){
		 printf("%d\t",matrix[i][j]);
	      }
	      printf("\n");
	   }
    }
   else{
      printf("Enter a square matrix!\n");
   }	   
 return 0;
}
