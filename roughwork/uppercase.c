#include <stdio.h>

int main()
{

	char ch;	/*try to include main.h as your header file*/
	char letter;	/*this will activate _putchar and _isupper functions*/
	int result;
	ch = 'C';
	
	if (ch = 'C')
	{
		letter = 'A';
		putchar(letter);
		letter = ':';
		result = 1;
		putchar(result);
		putchar('\n');
	}
	else
	{
		letter = 'a';
		putchar(letter);
		letter = ':';
		result = 0;
		putchar(result);
		putchar('\n');
	}
	return(0);
}
