#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	int count=0;

	if (argc<=1) {
		printf("Usage: %s <string>\n", argv[0]);
		return 1;
	}

	printf("%s\n", argv[1]);
	for (count==1;count<strlen(argv[1]);count++) {
		printf("%d", (count + 1) % 10);
	}
	printf("\n");
}
