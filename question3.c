#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void stringCap(char filename[]){
	char *file_string;
	long file_size;
	FILE *fp = fopen(filename, "rb");
	fseek(fp, 0, SEEK_END);
	file_size = ftell(fp);
	rewind(fp);
	file_string = malloc(file_size * (sizeof(char)));
	fread(file_string, sizeof(char), file_size, fp);
	fclose(fp);
	
	int i;
	int counter = 1;
	for (i = 1; i < strlen(file_string); i++){
		if(isalpha(file_string[i]) && file_string[i-1] == ' ' && (counter % 2 == 0)){
			file_string[i] = toupper(file_string[i]);
			counter++;
		}
		else if (isalpha(file_string[i]) && file_string[i-1] == ' ' && (counter % 2 != 0)){
			counter++;
		}
	}
	
	fp = fopen(filename, "w+");
	fprintf(fp, "%s", file_string);
	fclose(fp);
}

int main (int argc, char *argv[]) {
	if (argc != 2 ){
		printf("usage: %s filename", argv[0]);
	}
	else{
		stringCap(argv[1]);
	}
}
