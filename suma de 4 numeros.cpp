// programa suma de numeros, resultado positivo, negativo o igual a 0

#include <stdio.h>

float numero1,numero2,numero3,numero4;
float resultado = 0;

int main(){

	printf("ingrese el primer numero (positivo/negtivo): ");
	scanf("%f", &numero1);
	printf("ingrese el segundo numero (positivo/negtivo): ");
	scanf("%f", &numero2);
	printf("ingrese el tercer numero (positivo/negtivo): ");
	scanf("%f", &numero3);
	printf("ingrese el cuarto numero (positivo/negtivo): ");
	scanf("%f", &numero4);

	resultado = numero1+numero2+numero3+numero4;
	
	if (resultado > 0) {
	 	printf("el resultado de la suma de los numeros es positivo");
	}else if (resultado < 0) {
		printf("el resultado de la suma es negativo");
	}else{
		printf("el resultado de la suma es = 0");
	}
	

return 0;

}
