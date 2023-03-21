#define _CRT_SECURE_NO_WARNINGS 1
#include "17.2.films2.h"

//The s_gets() function return type is char *:
char* s_gets(char* st, int n) {
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		//A pointer to the first occurrence of character in str.
		//If the character is not found, the function returns a null pointer.
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
