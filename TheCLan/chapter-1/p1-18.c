/*Exercise 1-18 page 31
 *Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
 */

#include <stdio.h>
#define MAXLINE 1000

int getlinee(char line[], int maxline);
int removec(char s[]);

int main(void)
{
	char line[MAXLINE]; 

	int len;
	 while ((len = getlinee(line, MAXLINE))  > 0) {
	 	 if(removec(line) > 0)	
			printf("%s", line);
	 }
	
	return 0;
}

int removec(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\n')
		++i;
	--i;
	while (i > 0 && (s[i] == '\t' || s[i] == ' '))
		--i;

	if(i >= 0) {
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}

	

	
	return 1;
}

int getlinee(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if (i < lim-2) {
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
