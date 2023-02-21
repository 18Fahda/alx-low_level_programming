#include <unistd.h>
#include "_putchar.c"

/**
 * main - Check description
 * Description: It prints the word _putchar.c, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[11] = "_putchar.c";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
