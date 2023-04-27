#include <stdio.h>
/**
 * before_main - prints message before main using fwrite
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
