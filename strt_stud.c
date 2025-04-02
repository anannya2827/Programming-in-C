/* Name:Anannya
Date:2/4/25
Structure with student details  */
#include<stdio.h>
struct student{
   int rollno;
   char name[20];
   float cgpa;
};
int main(){
   struct student s1;
   printf("Enter the roll number:");
   scanf("%d",&s1.rollno);
   printf("Enter the name:");
   scanf("%s",s1.name);
   printf("Enter the CGPA:");
   scanf("%f",&s1.cgpa);
   printf("The details are:\n");
   printf("Name:%s",s1.name);
   printf("\nRoll no:%d",s1.rollno);
   printf("\nCGPA:%f\n",s1.cgpa);
return 0;
}
