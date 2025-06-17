#include <stdio.h>

int main()
{

	int num;

	printf("Enter the Number : ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("\n This is an Even Number");
	}
	else
	{
		printf("\n This is an Odd Number ");
	}
}