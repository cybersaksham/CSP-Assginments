// WAP to print half length of an string

#include <stdio.h>
#include <math.h>

int calcLength(char c[])
{
	int l = 0;
	while(c[l] != '\0') l++;
	return l - 1;
}

int main()
{
	int n, i;
	char c[50];
	
	fgets(c, 50, stdin);
	n = calcLength(c);
	
	for(i=0; i<ceil(n/2.0); i++) printf("%c", c[i]);	
	printf("\n");
	
	return 0;
}
