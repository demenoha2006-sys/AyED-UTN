#include <stdio.h>
#include <string.h>
char nombre[50];
char apellido[50];

float salario_Basico, viaticos, comida, premio;
float obra_Social, ley_19032, jubilacion;
float sueldo_Neto;
int ausentes;


int main() {
char falto[3];

printf("================================================/n");
printf("============ CALCULO DE SUELDO NETO =============/n");
printf("================================================/n");


printf("Ingrese el nombre del empleado: ");
scanf("%s", nombre);
printf("Ingrese el apellido del empleado: ");
scanf("%s", apellido);
printf("Ingrese el salario basico del empleado: ");
scanf("%f", &salario_Basico);
printf("Ingrese los viaticos del empleado: ");
scanf("%f", &viaticos);
printf("Ingrese la comida del empleado: ");
scanf("%f", &comida);
printf("Ingrese el premio del empleado: ");
scanf("%f", &premio);

float obra_social = salario_Basico * 0.03;
float ley_19032 = salario_Basico * 0.03;
float jubilacion = salario_Basico * 0.11;

printf("el empleado falto? (si/no): ");
scanf("%2s", falto);
if (strcmp(falto, "si") == 0) {
    printf("ingrese cantidad de ausencias: ");
    scanf("%d", &ausentes);
    sueldo_Neto = salario_Basico + viaticos + comida + premio - obra_social - ley_19032 - jubilacion - (ausentes * 5000);
} else {
    ausentes = 0;
    sueldo_Neto = salario_Basico + viaticos + comida + premio - obra_social - ley_19032 - jubilacion;
}
  
printf("================================================");
printf("============ RECIBO DE PAGO =====================");
printf("================================================");
printf("El nombre del empleado es: %s", nombre);
printf("El apellido del empleado es: %s", apellido);
printf("El salario basico del empleado es: %f", salario_Basico);
printf("Los viaticos del empleado es: %f", viaticos);
printf("La comida del empleado es: %f", comida);
printf("El premio del empleado es: %f", premio);
printf("Las ausencias del empleado es: %d", ausentes);
printf("Descuentos de obra social del empleado es: %f", obra_social);
printf("Descuentos de ley 19032 del empleado es: %f", ley_19032);
printf("Descuentos de jubilacion del empleado es: %f", jubilacion);
printf("El sueldo neto del empleado es: %f", sueldo_Neto);
return 0;

}
