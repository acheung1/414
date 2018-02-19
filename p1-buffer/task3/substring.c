#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef int bool;
#define true 1;
#define false 0;

int main()
{
	FILE* file;
	// add 1 for null terminating char
	char * str;
	int first;
	int last;
	int i;

	scanf("%s %d %d", str, &first, &last);

	if (!(0 <= first && first <= last && last < 32)) {
		printf("%s\n", "Invalid input");
		return 1;
	}

	printf("%s\n", "incrementing");

	for (i = 0; i < 33; i = i + 1) {
		printf("%d %s\n", i, str);

		if (str[i] == '\0') {
			break;
		}

	}

	if (last >= i) {
		printf("%s\n", "Invalid input");
		return 1;
	}

	str[32] = NULL;

	if (i > last)
	// file exist
	if (access("output.txt", F_OK) != -1) {
		printf("%s\n", "Unable to open file");
		return 1;
	} else {
		file = fopen("output.txt", "w");
		if(!file) {
			printf("Unable to open file\n");
			return 1;
		}
		printf("%s\n", str);
		for (int j = first; j <= last; j++) {
			fputc(str[j], file);
			fputc(str[j], stdout);
		}
	}
	
	fclose(file);
	return 0;
}