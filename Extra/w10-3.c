// WAP to find an string is palindrome or not

#include <stdio.h>

int calcLength(char c[])
{
	int l = 0;
	while(c[l] != '\0') l++;
	return l - 1;
}

int main()
{
	int n, i, flag = 0;
	char c[50];
	
	fgets(c, 50, stdin);
	n = calcLength(c);
	
	for(i=0; i<n/2; i++)
	{
		if(c[i] != c[n-1-i])
		{
			flag = 1;
			break;
		}
	}
	
	if(flag) printf("Not palindrome\n");
	else printf("Palindrome\n");
	
	return 0;
}
