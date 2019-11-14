#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char *argv[]){
    //la x es lo que queremos sacar
    //el valor a convertir es y
   double x, y, z ;
   x=atof(argv[1]);
   y=atof(argv[2]);
    if(x==1){ 
    //este pasa de fahrenhait a celsius
       z=(y-32)/1.8;
       printf("%.2f\n",z );
       return 0;
    }
    else if(x==0){
    //este  de celsius a fahrenhait
        z=32+(y*1.8);
        printf("%.2f\n",z );
        return 0;
    }
    return 0;
}  


