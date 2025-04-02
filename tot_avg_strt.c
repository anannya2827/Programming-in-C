#include<stdio.h>
typedef struct{
   int rollno;
   char name[20];
   float m1,m2,m3;
}student;
int main(){
   int n;
   float total;
   printf("Enter number of students:");
   scanf("%d",&n);
   student s[n];
   for(int i=0;i<n;i++){
      printf("Enter the roll number:");
      scanf("%d",&s[i].rollno);
      printf("Enter the name:");
      scanf("%s",s[i].name);
      printf("Enter the mark1:");
      scanf("%f",&s[i].m1);
      printf("Enter the mark2:");
      scanf("%f",&s[i].m2);
      printf("Enter the mark3:");
      scanf("%f",&s[i].m3);
      total=total+s[i].m1+s[i].m2+s[i].m3;
      printf("\n");
   }
      printf("\nTotal marks:%f\n",total);
      printf("\nAverage:%f",total/n);
      printf("\n");
return 0;
}
