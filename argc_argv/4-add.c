#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int a, b, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; b < argv[a][b]; b++)
		{
			if (argv[a][b] < 48 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}
