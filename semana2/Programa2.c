/*Creado el 15 de Agosto del 2018 por Daniel Alejandro Cruz Ponce*/

#include<stdio.h>

int main()
{

int a, b, c, d, numero1, numero2, numero3, numero4;
printf("Ingresa tu primer numero \n\n");
scanf("%d", &a);
printf("introduce tu segundo numero \n\n");
scanf("%d", &b);
printf("introduce tu tercer numero \n\n");
scanf("%d", &c);
printf("introduce tu cuarto numero \n\n");
scanf("%d", &d);

numero1= (a+b)*c/d;
numero2= ((a+b)*c)/d;
numero3= (a+b)*c/d;
numero4= a+(b*c)/d;



printf("EL resultads de estas operaciones son: %d,\n %d,\n %d,\n %d,\n", numero1, numero2, numero3, numero4);

return 0;
}

