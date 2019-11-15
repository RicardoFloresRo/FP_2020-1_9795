#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	//Aquí es la lista de enteros
	int numeros[argc-1];
	int i=0, j=1, numero;
	while(i<argc-1){
		//Este es para la nueva lista
		numero=atoi(argv[j]);
		numeros[i]=numero;
		i++;
		j++;
	}
//Esta variable es para que no se pierda nada, ningún dato
	int temporal;
	for (i = 1; i < argc;i++)
	{
		for ( j= 0; j< argc-1-i; j++)
		{
			if (numeros[j]>numeros[j+1])
			{
				//Se guarda en el temporal
				temporal=numeros[j];
				//Se hace retroceder el numero siguiente
				numeros[j]=numeros[j+1];

				numeros[j+1]=temporal;
			}
		}
	}
//usamos este for para imprimir
	for (int i = 0; i < argc-1; i++)
	{
		printf("%i\n",numeros[i]);
	}
}
