/*PROBLEMA :
Escribir un programa que calcule la suma de: 1 + 1/2 + + 1/3 + ... + 1/n.
 Utilizar una función que realice el cálculo de la suma y devuelva el resultado en el programa principal
*/

#include <stdio.h>
#include <conio.h>

//LLAMADO DE LA FUNCIÓN
float Sumar(int num);

//PROGRAMA PRINCIPAL
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


