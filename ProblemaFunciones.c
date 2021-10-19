#include <stdio.h>
#include <conio.h>

//PROGRAMA PRINCIPAL
float Sumar(int num);

int main()
{
    float valor;
	float resul;
    printf( "Ingrese un numero:\n  " );
    scanf( "%f", &valor);
    resul=Sumar(valor); //LLAMADA DE LA FUNCION
    printf("El resultado de la suma es:  %.2f",resul);
	getch();
    return 0;
}

//FUNCION SUMAR
float Sumar(int num)
{
    float suma;
    float i;
    for (i=1;i<=num;i++)
   {
     suma = suma + (1 / i);
   }
    return suma;
}


