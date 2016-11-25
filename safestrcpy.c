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

int substring(char *source, int from, int n, char *target){
        int j = 0;
        int tester = strlen(target);
        for (int i = from; i < n; i++){
                target[tester+j] = source[i];
                j++;
        }
        if (strlen(target) > tester){
                return 0;
        }
        else{
                return -1;
        }
}
