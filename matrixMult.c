/*
Josh Burak, Alexander Gadanidis, Kat Pinto, Matthew Sadecki
10169785, 10186175, 10168919, 10179995
*/

#include <stdio.h>

int main(int argc, char *argv[]){
	int a,b,c,d,e,f,g = 0;
	printf("Insert matrix 1 dimensions seperated by a space:\n");
	scanf("%10d%10d",&a,&b);
	printf("Insert matrix 2 dimensions sperated by a space:\n");
	while(b!=c){
		scanf("%10d%10d",&c,&d);
		if(b!=c){
			printf("width of matrix 1 must equal length of matrix 2");
	}}
	int m1[a][b], m2[c][d], product[b][d];
	printf("Input matrix 1 elements seperated by spaces:\n");
	for (e=0; e<a; e++){
		for (f=0; f<b; f++){
			scanf("%d", &m1[e][f]);}}
	printf("Input matrix 2 elements seperated by spaces:\n");
	for(e=0; e<c; e++){
		for(f=0; f<d; f++){
			scanf("%d", &m2[e][f]);}}
	for (e=0; e<a; e++){
		for (f=0; f<d; f++){
			product[e][f]=0;
			for (g=0; g<c; g++){
				product[e][f]=product[e][f]+m1[e][g]*m2[g][f];}}}
	for(e=0; e<a; e++){
		for(f=0; f<d; f++){
			printf("%d\t", product[e][f]);}
		printf("\n");}

}

