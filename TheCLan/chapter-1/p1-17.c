/* Exercise 1-17: page31
 * write a program to print all input lines that are longer than 80 characters.
 */

#include <stdio.h>
#define MAXLINE 1000
#define LONGLINE 10

int getlines(char line[], int maxline);
void copy (char to[], char from[]);

int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	while ((len = getlines(line, MAXLINE)) > 0) {
//		printf("%d, %s", len, line);
		if (len > LONGLINE)
			printf("%s", line);
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

int getlines(char s[], int lim)
{
	int i, j, c;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < MAXLINE-2) {
			s[j] = c;
			++j;
		}
	}
	if (c == '\n') {
		s[j] = c;
		++i;
		++j;
	}
	s[j] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	int i = 0;
	while ((to[i] = from[i]) != '\0') 
		++i;
}
