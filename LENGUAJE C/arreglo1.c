#include<stdio.h>

int main()
{
    int A[10];
    int sumatoria;
    float promedio;
    int i;//Declaracion de variables y dimensión del arreglo
    int valorMayor;
    int valorMenor;
    for (i = 0; i < 10; i++)//primer ciclo for para almacenar los 10 datos
    {//inicio for
    printf("Ingrese valores enteros");//Solicitud de datos al usuario
    scanf("%d",&A[i]);//guardado de datos del usuario
}//fin for (donde se hacia proceso de llenado)
sumatoria=0;
valorMayor=A[0];//Inicializacion de contadores
valorMenor=A[0];
for ( i = 1; i < 10; i++) 
{//segundo for para sacar los datos almacenados
    if (A[i] > valorMayor){
        valorMayor = A[i];// en esta primera condicion se evalua si el valor de i es mayor al valorMayor, si se cumple se guarda el dato
}
    if (A[i] < valorMenor){
        valorMenor = A[i];// en esta segunda condicion se evalua si el valor i es menor al valorMayor
    }
    sumatoria+=A[i]+A[i];//se hace la sumatoria dentro del bucle para almacenar el resultado en la suma
}//fin del segundo for
printf("\nEl valor menor es: %d\n", valorMenor);// aqui se imprime el valor menor con su mensaje correspondiente
printf("\nEl valor mayor es: %d\n", valorMayor);//aqui el valor mayor con su mensaje correspondiente
    promedio=(float)sumatoria/10;//con la sumatoria total sacamos el promedio diviendo entre el total del arreglo
printf("\nLa sumatoria total del arreglo es:%d\n", sumatoria);// se imprime la sumatoria total
printf("\nEl promedio seria: %.2f\n", promedio);//se imprime el promedio

return 0;

   } 