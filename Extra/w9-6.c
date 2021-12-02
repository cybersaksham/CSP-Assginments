// Write 4 functions for arithmetic operations

#include <stdio.h>

float add(float a, float b)
{
	return a + b;
}

float subtract(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	return a / b;
}

int main()
{
	float a, b, ans;
	int op;
	
	printf("Enter 2 numebrs\n");
	scanf("%f%f", &a, &b);
	
	printf("Enter operator\n");
	printf("0 for sum, 1 for subtract, 2 for multiply, 3 for divide\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 0:
			ans = add(a, b);
			break;
		case 1:
			ans = subtract(a, b);
			break;
		case 2:
			ans = multiply(a, b);
			break;
		case 3:
			if(b != 0)
			{
				ans = divide(a, b);
				break;
			}
		default:
			printf("Incorrect input\n");
			return 0;
	}
	
	printf("Ans is %f\n", ans);
	
	return 0;
}
