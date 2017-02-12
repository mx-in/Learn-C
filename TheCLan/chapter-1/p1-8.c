#include <stdio.h>

int main(void)
{
	int spacen, tabn, entren, c;

	spacen = 0;
	tabn = 0;
	entren = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++spacen;
		if (c == '\t')
			++tabn;
		if (c == '\n')
			++entren;
	}

	printf("s %d, t %d, e %d\n",spacen, tabn, entren);
}
