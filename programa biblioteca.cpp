#include <stdio.h>
#include <string.h>
// definicion de variables 
int numero_cliente;
float tiempo_pc = 0;
float cargo_adicional = 0;
int costo_minuto_pc = 10;
int costo_hoja = 15;
int cantidad_hojas = 0;
char uso_pc[3];
char impresion_hoja[3];
float total = 0;
 
//inicio la estructura del programa 
int main(){
	//pide el numero de cliente y asigna el valor a la variable
	printf("ingrese el numero del cliente: ");
		scanf("%d",&numero_cliente); 
	//pregunta si el cliente uso el pc, si la respuesta es un si entonces pregunta el tiempo que estubo en el pc 
	//y lo asigna a la variable tiempo_pc
	printf("¿el cliente uso algun pc? (si/no): ");
		scanf("%s",uso_pc);
			if(strcmp(uso_pc,"si")==0){
				printf("¿cuanto tiempo estubo? (minutos): ");
					scanf("%f",&tiempo_pc);	
					 cargo_adicional = 5*(tiempo_pc*0.01);
			}else{
				//no se hace nada y se sigue con la siguiente linea 
			};
	printf("¿el cliente imprimio hojas?(si/no): ");
		scanf("%s", impresion_hoja);
			if(strcmp(impresion_hoja,"si")==0){
				printf("¿cuantas hojas imprimio?: ");
					scanf("%d", &cantidad_hojas);
			}else{
				//no hace nada y sigue con la siguiente linea
			};
			
	total = (costo_minuto_pc*tiempo_pc) + (costo_hoja*cantidad_hojas) + cargo_adicional;
	
	printf("----------------FACTURA----------------");
	printf("el costo por el uso del pc es: %f", costo_minuto_pc*tiempo_pc);
	printf("el costo por impresiones es : %d", costo_hoja*cantidad_hojas);
	printf("el costo por cargo adicional es: %f ", cargo_adicional);
	printf("el costo total es: %f ", total);
	
	return 0;		
	
	
	
	
	
}
