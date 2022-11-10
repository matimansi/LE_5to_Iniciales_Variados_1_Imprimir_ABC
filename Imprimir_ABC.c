
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
