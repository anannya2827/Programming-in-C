#include<stdio.h>
int main(){
   int num1,num2,result;
   char operator;
   printf("Enter two numbers:");
   scanf("%d%d",&num1,&num2);
   printf("Choose an operator from(+,-,*,/,%%)");
   scanf(" %c",&operator);
   switch(operator){
    	case'+':
		result=num1+num2;
		printf("\nThe sum is:%d",result);
		break;
    	case'-':
		result=num1-num2;
		printf("\nDifference is:%d",result);
		break;
    	case'*':
		result=num1*num2;
		printf("\nProduct is:%d",result);
	        break;
    	case'/':
           	if(num2!=0){
                   result=num1/num2;
             	   printf("\nQuotient of %d/%d is:%d",num1,num2,result);
             	   result=num2/num1;
             	   printf("\nQuotient of %d/%d is:%d",num2,num1,result);  
           	}
           	else{
             	   printf("\nDivision by Zero is not possible");            
           	}
           	break;
    	case'%':
           	if(num2!=0){
             	   result=num1%num2;
             	   printf("\nModulus of %d %% %d is:%d",num1,num2,result); 
             	   result=num2%num1;
             	   printf("\nModulus of %d %% %d is:%d",num2,num1,result); 
           	}
           	else{
                printf("\nModulus by Zero is not possible");            
           	}
           	break;
     	default:
            	printf("Invalid Operator");
            	break;
   }
  return 0;   
}
