/* Name:Anannya
Date:2/4/25
Structure with student details using typedef  */
#include<stdio.h>
typedef struct{
   int rollno;
   char name[20];
   float cgpa;
}student;
int main(){
   int n;
   printf("Enter number of students:");
   scanf("%d",&n);
   student s[n];
   for(int i=0;i<n;i++){
      printf("Enter the roll number:");
      scanf("%d",&s[i].rollno);
      printf("Enter the name:");
      scanf("%s",s[i].name);
      printf("Enter the CGPA:");
      scanf("%f",&s[i].cgpa);
      printf("\n");
   }
   printf("The details are:");
   for(int i=0;i<n;i++){
      printf("Name:%s",s[i].name);
      printf("\nRoll no:%d",s[i].rollno);
      printf("\nCGPA:%f\n",s[i].cgpa);
      printf("\n");
   }
return 0;
}
