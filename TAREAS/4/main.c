#include <stdlib.h>
#include <stdio.h>
float m;
float y=0;
float promedio;
//Declarando las variables
int main(int argc, char const *argv[]){
	//construyendo la repetición con for
	for (int i = 0; i < argc; ++i){
		m=atof(argv[i]);
		y=y+m;
	}
	//Esta es la opreacion para generar el promedio
	promedio=y/(argc-1);
	printf("%.2lf\n",promedio );
	return 0;

}