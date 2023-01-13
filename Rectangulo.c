#include<stdio.h>

int main()
{
    int base, altura, area;

    printf("Ingrese la medida de la base: \n");
    scanf("%d", &base);

    printf("Ingrese la medida de la altura: \n");
    scanf("%d", &altura);

    area = base * altura;
    printf("El área del rectángulo es igual a: %d", area);
}