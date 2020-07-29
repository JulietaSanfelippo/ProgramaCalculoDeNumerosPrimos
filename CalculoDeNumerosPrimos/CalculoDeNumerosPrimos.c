#include <stdio.h>
#include <stdlib.h>

void calcularSiEsPrimo(int);


int main (){

int numero;

printf ("Hola! Por favor, ingrese un numero entero positivo:\n");
scanf ("%d", &numero);
printf ("El numero ingresado es: %d\n", numero);
calcularSiEsPrimo(numero);

system("PAUSE");

return 0;

}

void calcularSiEsPrimo (int valor){

int i=2;
int resto;

        while (i>=2 && i<=valor){

        resto=valor%i;
        i++;

        if (resto==0 && i<valor){
            printf ("El numero NO es primo\n");
            i=0;}else {
             printf ("El numero ES primo\n");
             i=0;
            }

        }
}

