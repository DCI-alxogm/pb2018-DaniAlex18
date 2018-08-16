/*Creado el 12 de Agosto del 2018 por Alejandro Cruz*/

#include <stdio.h>

  int main()
    {
       int edad, edad2;
     char nombre[22];

     printf("Cual es tu nombre\n\n");
     scanf("%s", &nombre);
     printf("Cual es tu edad\n\n");
     scanf("%d", &edad);
     edad2=edad+10;
     printf("%s \n Tu edad en 2028 es : %d \n" ,nombre, edad2);
     return 0;
     }
