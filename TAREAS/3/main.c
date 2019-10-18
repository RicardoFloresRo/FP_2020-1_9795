#include <stdio.h>
#include <stdlib.h>
 int main(int argc, char const *argv[])
{
	float n1,n2;
	n1=atof(argv[1]);
	n2=atof(argv[2]);
	float suma, resta , multiplicación, división;
	suma=n1+n2;
	resta=n1-n2;
	multiplicación=n1*n2;
	división=n1/n2;
	printf("\n%.2f",suma);

	printf("\n%.2f",resta);

	printf("\n%.2f",multiplicación);

	printf("\n%.2f",división);
	printf("\n");
	return 0;
}


