/*
Scrivere un programma che chieda all'utente di inserire una lista di numeri, di lunghezza non specificata e terminata da zero.
Terminato l'inserimento il programma stampa la somma di tutti i numeri negativi che sono stati inseriti.
*/

#include <stdio.h>

int main()
{
	int somma = 0, numero;
	printf("inserire una sequenza di numeri interi, terminata da 0\n");
	do {
		scanf("%d", &numero);
		if (numero < 0)
		{
			somma = somma + numero;
		}

	} while (numero != 0);
	printf("la somma dei numeri negativi inseriti e' %d\n", somma);
	return 0;
}
