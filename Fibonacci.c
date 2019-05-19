#include <stdio.h>
#include <stdlib.h>
int main()
{
	//with a loop
	/*int n, first = 0, second = 1, next, c;

	printf("Enter the number of terms\n");
	scanf_s
	("%d", &n);

	printf("First %d terms of Fibonacci series are:\n", n);

	for (c = 0; c < n; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d\n", next);
	} 

	*/

	
		int n, first = 0, second = 1, next, c;

		printf("Enter the number of terms\n");
		scanf_s("%d", &n);

		printf("First %d terms of Fibonacci series are:\n", n);

		for (c = 0; c < n; c++)
		{
			if (c <= 1)
				next = c;
			else
			{
				next = first + second;
				first = second;
				second = next;
			}
			printf("%d\n", next);
		}

	

	system("PAUSE");
	return 0;
}
