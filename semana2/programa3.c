/*Progrma creado el 16 de Agosto del 2018 por Daniel Alejandro Cruz Ponce*/


  #include<stdio.h>

  int main()
{

   float  z, y, w, v, numero1, numero2, numero3, numero4;
   printf("introduce tu primer numero \n\n");
   scanf("%f", &z);
   printf("introduce tu segundo numero \n\n");
   scanf("%f", &y);
   printf("introduce tu tercer numero \n\n");
   scanf("%f", &w);
   printf("introduce tu cuarto numero \n\n");
   scanf("%f", &v);

numero1= (z+y)*w/v;
numero2= ((z+y)*w)/v;
numero3= (z+y)*w/v;
numero4= z+(y*w)/v;


printf("los resultados de las operaciones son:\n %f,\n\n %f,\n\n %f,\n\n %f,\n\n", numero1, numero2, numero3, numero4);

return 0;
}
