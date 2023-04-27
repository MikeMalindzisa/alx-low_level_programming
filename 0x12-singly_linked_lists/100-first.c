#include <stdio.h>
/**
 * msg1 - prints the first msg using write
 */

void message(void) {
	char *message = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	size_t len = 61;

	write(STDOUT_FILENO, message, len);
}

/**
 * main - Start here
 *
 * Return: Always 0.
 */
int main(void)
{
	message();
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}

