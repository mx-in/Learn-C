/*Exercise 1-19 page 31
 *Write a funcion reverse(s) that reverses the character string s. Use it to write a program that reverses its input aline at a time.
 */

#include <stdio.h>
#define MAXLINE 1000

int getlinen(char line[], int maxline);
void reverse(char s[]);

int  main(void)
{
	int len;
	char line[MAXLINE];

	while ((len = getlinen(line, MAXLINE)) > 0) {
		reverse(line);
		printf("%s", line);
	}
	return 0;
}

void reverse(char s[])
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0') 
		++i;
	--i;
	if(s[i] ==  '\n')
		--i;
	j = 0;
	while (j < i) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}

int getlinen(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		if(i < lim-2) {
			s[j] = c;
			++j;
		}
	if (c == '\n') {
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';

	return i;
}

