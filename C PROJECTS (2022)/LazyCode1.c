/*****************************************
lazy code test #1
	
	Write a C rogram to check whether a given number is positive or negative
	
******************************************/
#include<stdio.h>

	int main()
{

		int num1;
	
	printf("\nThis Program will check if your given number is positive or negative \n");	

	printf("\nType a number to check: ");
	scanf("%d",&num1);
	
	if(num1 >= 0){
		printf(" %d is positive",num1);
		scanf("%d",&num1);	
	}
	else	
		printf("It is negetive");
				
	return 0;
}