/* Name:Anannya
Date:2/4/25
Structure with employee details using typedef  */
#include<stdio.h>
typedef struct{
   char name[20];
   int id;
   float salary;
}emp;
int main(){
   int n;
   printf("Enter number of employees:");
   scanf("%d",&n);
   emp s[n];
   for(int i=0;i<n;i++){
      printf("Enter the name:");
      scanf("%s",s[i].name);
      printf("Enter the id:");
      scanf("%d",&s[i].id);
      printf("Enter the salary:");
      scanf("%f",&s[i].salary);
      printf("\n");
   }
   printf("The details are:");
   for(int i=0;i<n;i++){
      printf("Name:%s",s[i].name);
      printf("\nID no:%d",s[i].id);
      printf("\nSalary:%f\n",s[i].salary);
      printf("\n");
   }
return 0;
}
