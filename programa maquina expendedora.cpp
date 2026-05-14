// programa maquina expendedora 

#include <stdio.h>
float valor_maquina = 1.25;
float valor_moneda010 = 0.10;
float valor_moneda025 = 0.25;
float valor_moneda050 = 0.50;
float valor_moneda1 = 1;

int cantidad_monedas010 = 0;
int cantidad_monedas025 = 0;
int cantidad_monedas050 = 0;
int cantidad_monedas1 = 0;

float dinero_total = 0;
float vuelto = 0;

int main(){
	
	printf("el valor de uso de la maquina es de $1,25");
	
	printf("ingrese la cantidad de monedas de $0.10 que va a utilizar para el pago:");
	scanf("%d",&cantidad_monedas010);
	printf("ingrese la cnatidad de monedas de $0.25 que va a utilizar para el pago:");
	scanf("%d",&cantidad_monedas025);
	printf("ingrese la cantidad de monedas de $0.50 que va a utilizar para el pago:");
	scanf("%d",&cantidad_monedas050);
	printf("ingrese la cantidad de monedas de $1 que va a utilizar para el pago:");
	scanf("%d",&cantidad_monedas1);
	
	dinero_total = (cantidad_monedas010*valor_moneda010) + (cantidad_monedas025*valor_moneda025) + (cantidad_monedas050*valor_moneda050) + (cantidad_monedas1*valor_moneda1); 
	
	if (dinero_total - valor_maquina == 0){
		printf("gracias por su compra");
	}else if(dinero_total - valor_maquina > 0){
		vuelto = dinero_total - valor_maquina; 	
		printf("su vuelto es de: %f. gracias por su compra",vuelto);
	}else{
		printf("dinero insuficiente, devolviendo monedas....");
	};
	
	
	return 0;
}
