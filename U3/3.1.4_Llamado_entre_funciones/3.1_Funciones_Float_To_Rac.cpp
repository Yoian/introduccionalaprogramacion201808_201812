// 3.1_Funciones_Float_To_Rac.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <cmath>

int calc_mcd(int n, int d);
/*Obtiene numerador y denominador de un n\'umero real 
  con dos cifras decimales*/
void float_to_Rac(float floatParam, int ND[2]) {
	int NUM, DEN, MCD;
	NUM = (int)floor(floatParam * 100); DEN = 100;
	MCD = calc_mcd(NUM, DEN);
	ND[0] = NUM / MCD;
	ND[1] = DEN / MCD;
}

/*Calcula el m\'aximo divisor com\'un de los enteros n y d*/
int calc_mcd(int n, int d) {
	int M, N, tmp, MCD;
	/*si numerador!=0 y denominador!=0, usar Algoritmo de Euclides*/
	if ((n != 0) && (d != 0)) {
		if (n>d) {
			M = abs(n); N = abs(d);
		}
		else {
			M = abs(d); N = abs(n);
		}/* ALGORITMO DE EUCLIDES (300 a.C.) */
		while ((tmp = M % N) != 0) { /* M = QN + tmp */
			M = N;
			N = tmp;
		}/*cuando este while termina, en N se tiene el mcd*/
		MCD = N;
	}
	else {/*si no, hacer mcd=1*/
		MCD = 1;/*Para evitar problemas cuando n=0 o d=0*/
	}
	return MCD;
}

void float_to_Rac(float floatParam, int N,int D) {
	int NUM, DEN, MCD;
	printf("float_to_Rac(float floatParam, int N,int D): N=%d, D=%d\n", N, D);
	NUM = (int)floor(floatParam * 100); DEN = 100;
	MCD = calc_mcd(NUM, DEN);
	N = NUM / MCD;
	D = DEN / MCD;
	printf("float_to_Rac(float floatParam, int N,int D): N=%d, D=%d\n",N,D);
}

float Rac_to_Float(int numerador,int denominador) {
	float resultado,num,den;
	num = numerador; den = denominador;
	resultado = num / den;
	return resultado;
}

int main()
{
	float test = 5.25;
	int nd[2];
	float result;
	float_to_Rac(test,nd);/*argumento por referencia*/
	printf("El n\\'umero real %f es equivalente a %d/%d\n",
		test,nd[0],nd[1]);
	result = Rac_to_Float(nd[0], nd[1]);
	printf("El n\\'umero real es %.2f\n", result);

	test = 3.14;
	float_to_Rac(test, nd);/*argumento por referencia*/
	printf("El n\\'umero real %f es equivalente a %d/%d\n",
		test, nd[0], nd[1]);
	//int Nu = 100, De = 200;
	//float_to_Rac(test, Nu,De);/*argumentos por valor*/
	//printf("El n\\'umero real %f es equivalente a %d/%d\n",
	//	test, Nu, De);
	result = Rac_to_Float(nd[0],nd[1]);
	printf("El n\\'umero real es %.2f\n",result);

    return 0;
}//end main()

