#include <stdio.h>
void soma(float,float);
void sub(float,float);
void multi (float,float);
void div(float,float);
int menu ();

main () {
	int op;
	float x=8, y=2;
	op = menu();
	
	switch(op) {
		case 1:
			soma(x,y);
			break;
		case 2:
			sub(x,y);
			break;
		case 3:
			multi(x,y);
			break;
		case 4:
			div(x,y);
			break;
		default:
			printf("Digitou errado !!!");
	}	
}

int menu () {
	int aux;
	printf("\n1:soma\n2:sub\n3:multi\n4:div\n\n");
	scanf("%d", &aux);
	return aux;
}

void soma(float x, float y) {
	float aux = x + y;
	printf("%.2f + %.2f = %.2f", x, y, aux);
}

void sub(float x, float y) {
	float aux = x - y;
	printf("%.2f - %.2f = %.2f", x, y, aux);	
}

void multi (float x, float y) {
	float aux = x * y;
	printf("%.2f x %.2f = %.2f", x, y, aux);
}

void div (float x, float y) {
	float aux = x/y;
	printf("%.2f / %.2f = %.2f", x, y, aux);	
}
