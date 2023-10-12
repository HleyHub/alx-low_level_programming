#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Passwords for the crackme5 executable
 * @argc: The number of arguments
 * @argv: An array of arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int lgth = strlen(argv[1]), j, var;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	var = (lgth ^ 59) & 63;
	password[0] = codex[var];

	var = 0;
	for (j = 0; j < lgth; j++)
		var += argv[1][j];
	password[1] = codex[(var ^ 79) & 63];

	var = 1;
	for (j = 0; j < lgth; j++)
		var *= argv[1][j];
	password[2] = codex[(var ^ 85) & 63];

	var = 0;
	for (j = 0; j < lgth; j++)
	{
		if (argv[1][j] > var)
			var = argv[1][j];
	}
	srand(var ^ 14);
	password[3] = codex[rand() & 63];

	var = 0;
	for (j = 0; j < lgth; j++)
		var = var + (argv[1][j] * argv[1][j]);
	password[4] = codex[(var ^ 239) & 63];

	for (j = 0; j < argv[1][0]; j++)
		var = rand();
	password[5] = codex[(var ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
