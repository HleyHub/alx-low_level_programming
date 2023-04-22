/**
 * main - Prints the alphabet in lowercase except q and e
 *
 * Return: 0
 */
int main(void)
{
	char al = 'a';
	while (al <= 'z')
	{
		if (al ! 'q' && al ! 'e')
		{
			putcha(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
