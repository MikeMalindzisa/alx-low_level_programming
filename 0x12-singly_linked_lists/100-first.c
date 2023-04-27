#include <stdio.h>
/**
 * before_main - prints message before main using fwrite
 */
void __attribute__((constructor)) before_main()
{
	char *part0 = "You're beat! and yet, you must allow,\n";
	char *part1 = "I bore my house upon my back!\n";
	size_t len_0 = 39, len_1 = 31;

	fwrite(part0, sizeof(char), len_0, stdout);
	fwrite(part1, sizeof(char), len_1, stdout);
}
