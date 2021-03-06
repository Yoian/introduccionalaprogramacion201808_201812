// 3.1_Funciones.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "stdlib.h"

#define TAM	100
/**Devuelve 1 si elem est\'a en el arreglo arr,
 y devuelve 0 en caso contrario.
*/
int pertenece(int elem,int arr[TAM], int tam) {
	int i;
	for (i = 0; i < tam; i++)
	{
		if (elem == arr[i]) {
			return 1;
		}
	}
	return 0;
}

void print_array(int arr[], int tam) {
	int i;
	if (tam >= 10) {
		for (i = 0; i < tam; i++) {
			printf("%5d",arr[i]);
			if ((i + 1) % 10 == 0) {
				printf("\n");
			}
		}
	}
	else
	{
		for (i = 0; i < tam; i++) {
			printf("%5d", arr[i]);
		}
	}
}

void float_to_Rac(float floatParam, int ND[2]) {

}

int main()
{
	int A[TAM];
	int intNum;
	srand(NULL);
	for (int i = 0; i < TAM; i++)
	{
		A[i] = 1 + rand() % 100;
	}
	printf("Ingrese un n\\'umero entero: ");
	scanf_s("%d",&intNum);
	if (pertenece(intNum, A, TAM)){
		printf("%d SI est\\'a en el arreglo A\n",intNum);
	}else{
		printf("%d NO est\\'a en el arreglo A\n",intNum);
	}
	printf("\n");
	print_array(A,sizeof(A)/sizeof(int));
    return 0;
}//end main()

