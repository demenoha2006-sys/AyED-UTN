#include <stdio.h>


float nota;
float suma_notas = 0;
int promedio;


int main(){
	
	for(int alumno = 1; alumno <=40 ; alumno ++){
		printf("ingrese la nota del alumno %d: ",alumno);
		scanf("%f", &nota);
		
		suma_notas = suma_notas + nota;
	}
	
	
	promedio= suma_notas/40;
	printf("el promedio de la comision es: %d", promedio);
	
	
	
	
	return 0;
}
