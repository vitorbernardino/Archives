
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sal, receber, imp;
	
	printf("digite o salario base: ");
	
	scanf("%f", &sal);
	
	imp = sal * 10/100;
	
	receber = sal + 50 - imp;
	
	printf("o salario a receber �: %.2f", receber);
	
	return 0;
}
