#include "lotus.h"
#include "lotus-cli.h"

void displayMenu(const char *path, int show_hidden) {
	puts("\n----------------------");
	listFiles(path, show_hidden);
	puts("\n----------------------");

	printf("1. Make directory.\n2. Delete a file/directory.\n"
		   "3. Change directory.\n4. Toggle hidden files/directories.\n");

	printf("\n\\> ");
}

char *getNextPath(const char *path) {
	char input[BUFFSIZE];
	printf("> ");
	scanf("%[^\n]%*c", input);
	return getFullPath(path, input);
}
