#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char op;

	double num1;		
    double num2;		
    double result;		

   	printf("\n Enter operation : ");

	scanf("%c", &op);
	
	printf("\n Enter num1 :");
	scanf("%lf", &num1);
 
  	
	printf("\n Enter num2 : ");

	scanf("%lf", &num2);
	if (op == 'x')
	{
		exit(0);
	}

	
	switch(op)
	{
	case '+':
        result = num1 + num2;
		printf("\n result : %.1lf",result);
		break;
	case '-':
		result = num1 - num2;
		printf("\n result :%.1lf ",result);
		break;
	case '*':
		result = num1 * num2;
		printf("\n result : %.1lf",result);
		break;
	case '/':
		result = num1 / num2;
		printf("\n result :%1lf ",result);
		break;
	
	default:
		printf("Error, please Enter Valid operator \n");
	}

	printf("\n");

}
