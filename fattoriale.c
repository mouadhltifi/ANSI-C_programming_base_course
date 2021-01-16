/*
Scrivere un programma che chieda all'utente di inserire un intero positivo n e poi calcoli e stampi a video il fattoriale di n.
*/

#include <stdio.h>

int main()
{
	unsigned int n, i; // il contatore mi serve, perche' nel loop non posso decrementare n che stampo anche alla fine
	unsigned int fattoriale = 1;
	printf("dammi un numero intero non negativo\n");
	scanf("%u", &n);

	for (i = n; i > 1; i--)
	{
		fattoriale *= i;
	}
	printf("il fattoriale di %u e' %u\n", n, fattoriale);

	return 0;
}
