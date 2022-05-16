#include <stdio.h>
#include <stdlib.h>

/*
1. Crear una función llamada aplicarAumento que reciba como parámetro
el precio de un producto y devuelva el valor del producto con un aumento del 5%.
Realizar la llamada desde el main.
*/

float aplicarAumento(int primerValor){
    float resultado;
    float resultadoAumento;

    resultado = (primerValor * 5) / 100;
    resultadoAumento = primerValor + resultado;

    return resultadoAumento;
}

int main()
{
    int precio;
    float precioAumentado;

    printf("Ingrese un precio: ");
    scanf("%d", &precio);

    precioAumentado = aplicarAumento(precio);

    printf("El precio con 5 porciento de aumento es: %.2f\n", precioAumentado);

    return 0;
}
