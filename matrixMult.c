#include <stdio.h>

int main(int argc, char *argv[]){
	int a,b,c,d,e,f,g,sum = 0;
	printf("Insert matrix 1 dimensions seperated by a space:\n");
	scanf("%10d%10d",&a,&b);
	printf("Insert matrix 2 dimensions sperated by a space:\n");
	scanf("%10d%10d",&c,&d);
	int m1[a][b], m2[c][d];
	printf("Input matrix 1 elements seperated by spaces:\n");
	for (e=0;e<a;e++)
		for (f=0;f<b;f++)
			scanf("%d", &m1[e][f]);
	printf("Input matrix 2 elements seperated by spaces:\n");
	for(e=0;e<c;e++)
		for(f=0;f<d;f++)
			scanf("%d", &m2[e][f]);
	for (e=0;e<a;e++)
		for (f=0;f<d;f++)
			for (g=0;g<c;g++)
				sum = sum + m1[e][g]*m2[g][f];

	for(e=0;e<a;e++)
		for(f=0;f<b;f++)
			printf("%d\t", m1[e][f]);
			printf("%d", f); 
			printf("\n");

}

