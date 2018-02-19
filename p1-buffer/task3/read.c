#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	FILE *file;
	int c;

	if (access("output.txt", F_OK) == -1) {
		printf("%s\n", "Unable to open file");
		return 1;
	} else {
		file = fopen("output.txt", "r");
		if (!file) {
			printf("%s\n", "Unable to open file");
			return 1;
		} else {
			while ((c = getc(file)) != EOF) {
				putchar(c);
			}
		}
		fclose(file);
	}
	/* code */
	return 0;
}