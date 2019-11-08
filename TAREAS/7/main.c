#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argu[]) {
//declaramos variables
	int a;
	int b;
	int c=1;
	a=atof(argu[1]);
	b=atof(argu[2]);
	//Ahora vemos donde la vamos a almacenar
	for (int i = 0; i < b; i++)
	{
		//decimos en donde se va a guardar y que se va a multiplicar
		c=c*a;
	}
	//imprimimos el resultado
	printf("%.2d\n",c );

return 0;
}