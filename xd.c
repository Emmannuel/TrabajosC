#include <stdio.h>
#include <string.h>
int main ()
{
    char nombre[40];
    float anterior, actual, consumo;
    float costo;
    int x;
    for(x=1;x<=3;x++){
    printf("Nombre de usuario: ");
    gets(nombre);
    printf("Lectura Anterior (Kwh): ");
    scanf("%f", &anterior);
    printf("Lectura Actual (Kwh): ");
    scanf("%f", &actual);
    //Si el consumo es menor o igual a 100 kwh se
    //paga 0.25 por cada Kwh.
    consumo = actual - anterior;
    if(consumo <= 100)
        costo = 0.25*consumo;
    //Si el consumo es mayor a 100 Kwh y menor o
    //igual 200 kwh el exceso se paga a 0.35 kwh.
    else if(consumo > 100 && consumo <= 200)
        costo = 0.35*(consumo - 100) + 0.25*100;
    //Si el consumo es mayor a 200 Kwh el nuevo
    //exceso se paga a 0.45 por cada kwh
    else if(consumo > 200)
        costo = 0.45*(consumo - 200) + 0.35*100 + 0.25*100;

    printf("Sr(a): %s\n", nombre);
    printf("Consumo: %0.2f\n", consumo);
    printf("Monto: %0.2f\n", costo);
}

  return 0;
}
