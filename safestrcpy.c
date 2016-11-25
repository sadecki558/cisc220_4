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

int main(int argc, char *argv[]){
	char *a, char *b = "";
	printf("Enter string 1 and 2 for safestrcpy function seperated by a space:\n");
	scanf("%128s%128s", *a,*b);
	string *c = "";
	*c=safestrcat(*a,*b);
	char *source, char *target = "";
	int from, int n = 0;
	printf("Enter source string and target string for substring function seperated by space:\n");
	scanf("%128s%128s", *source, *target);
	printf("Enter integer from and integer n for substring function seperated by space:\n");
	scanf("%d%d",from,n);
	int d = 0;
	d = substring(char *source, int from, int n, char *target);
}
