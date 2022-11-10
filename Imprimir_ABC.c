
/*
	Quiero ver todas las letras del abecedario de a-z y su valor hexadecimal correspondiente.
	(Si utilizo comillas simples puedo trabajar con el valor correspondiente dentro de la tabla ASCII)

	>>> TERMINADO <<<
*/

#include <stdio.h>

void imprimir_ABC(void);

int main()
{
	imprimir_ABC();
	return (0);
}

void imprimir_ABC()
{
	printf("\n");	// Solo por estetica Atte. Matias Mansilla
	for (int M = 'A'; M <= 'Z'; M++)
	{
		int m = M + ('a'-'A');
		printf("| 0x%X <-> %c |-| 0x%x <-> %c |\n", M, M, m, m);
	}
	printf("\n");
}
