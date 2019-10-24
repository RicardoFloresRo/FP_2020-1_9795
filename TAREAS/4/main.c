#include <stdlib.h>
#include <stdio.h>
float m;
float y=0;
float promedio;
int main(int argc, char const *argv[]){
	for (int i = 0; i < argc; ++i){
		m=atof(argv[i]);
		y=y+m;
	}
	promedio=y/(argc-1);
	printf("%.2lf\n",promedio );
	return 0;

}