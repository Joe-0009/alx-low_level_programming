#include "main.h"

/**
 * _strcat : it appends a string byt another one
 *
 * @src: first string
 * @des: second string
 *
 * Return: a long string
 *
 */

char *_strcat(char *dest, char *src)
{
	int i=0;
	int k = 0;
    
    while (source[i] != '\0' )
       i++;
    while (source[k] != '\0' )
	    k++;
    
    char arr[i + k] ; 
    char* desty = arr;
    i=0;
    
    while (source[i] != '\0')
    {
	    arr[i] = source[i];
	    i++;
    }
    while (destination[i] != '\0')
    {
	    arr[i] = destination[i];
	    i++;
    }

    arr[i] = '\0';
    return desty;
}

