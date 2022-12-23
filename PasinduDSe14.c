#include<stdio.h>
void main(){
	int line,star,space;
	
	for(line=1;line<=4;line++){
		for(space=1;space<line;space++){
			printf(" ");
		}
		for(star=1;star<=(5-line);star++){
			printf("*");
			
		}
		printf("\n");
	}
}