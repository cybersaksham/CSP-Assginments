// Write prime function which returns 1 on passing prime otherwise 0

#include <stdio.h>

int prime(int a)
{
	int flag = 1, i = 2;
	while(i <= a / 2)
	{
		if(a % i == 0)
		{
			flag = 0;
			break;
		}
		i++;
	}
	return flag;
}

int main()
{
	int a;
	
	printf("Enter a number = ");
	scanf("%d", &a);
	
	printf("Output of prime function is %d\n", prime(a));
	
	return 0;
}
