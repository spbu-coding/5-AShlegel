#include <stdio.h>
#include <stdlib.h>

void other() {
	printf("Success: other function was called\n");
	exit(0);
}

void input() {
	char buffer[5];
	gets(buffer);
}

int main() {
	printf("%p\n", &other);
	input();
	printf("Fail: input function worked correctly\n");
	return 0;
}
