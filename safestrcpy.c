/*
Josh Burak, Alexander Gadanidis, Kat Pinto, Matthew Sadecki
10169785, 10186175, 10168919, 10179995
*/

#include<stdlib.h>
#include <string.h>

char* safestrcat(char *a, char *b){
	char *result = malloc(strlen(a)+strlen(b)+1);
	strcpy(result, a);
	strcat(result, b);
	return result;
}

