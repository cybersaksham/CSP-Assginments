// WAP to perform matrix multiplication

#include <stdio.h>

int main()
{
	int A[10][10];
	int B[10][10];
	int C[10][10];
	int m, n, p, q, i, j, k, sum = 0;
	
	printf("Enter rows in first matrix = ");
	scanf("%d", &m);
	printf("Enter columns in first matrix = ");
	scanf("%d", &n);
	printf("Enter rows in second matrix = ");
	scanf("%d", &p);
	printf("Enter columns in second matrix = ");
	scanf("%d", &q);
	
	if(m<=0 || n<=0 || p<=0 || q<=0 || n!=p)
	{
		printf("Incorrect dimensions\n");
		return 0;
	}
	
	printf("Enter first matrix\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("Enter second matrix\n");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i=0; i<m; i++)
	{
		for(k=0; k<q; k++)
		{
			sum = 0;
			for(j=0; j<n; j++)
			{
				sum += A[i][j] * B[j][k];
			}
			C[i][k] = sum;
		}
	}
	
	printf("Result is\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
