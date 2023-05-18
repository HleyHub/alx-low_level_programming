#include "main.h"
#include <string.h>
#include <stdlib.h>
char** split_string(char* str, char sep)
{
	int array_length=0, i, j, k;

	for(i = 0; str[i] != '\0'; ++i){
	if(str[i] == sep)
		++array_length;

	char** str_arr = (char**)malloc(sizeof(char*) * (array_length+1));
	for(i = 0, j, k = 0; str[i] != '\0'; ++k)
	{
		for(j = i; str[j] != sep && str[j] != '\0'; ++j);
			str_arr[k] = (char*)malloc((j-i+2)*sizeof(char));
			strncpy(str_arr[k], str+i, j-i);
		i = j+1;
	}
	return (str_arr);
}
