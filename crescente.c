/*
Scrivere un programma che chieda all'utente di inserire una sequenza di numeri positivi, di lunghezza non specificata a priori e terminata da zero.
Quando l'utente inserisce uno zero, il programma stampa a video
- "CRESCENTE" se la successione inserita (escluso lo zero che termina la successione) è strettamente crescente
- "DECRESCENTE" se la successione è decrescente (sempre escluso lo zero finale)
- "NON CRESCENTE E NON DECRESCENTE" se nessuno dei due altri casi è verificato.
*/

#include <stdio.h>

int main()
{
	int numero, precedente;
	int crescente = 1;
  int decrescente = 1;
	int continua = 1;
  int iterazione = 0;

	do {
		scanf("%d", &numero);

		if (numero == 0){
      continua == 0;
			break;}

    iterazione ++;
    if (iterazione > 1){ //serve per evitare che faccia il primo confronto coi valori di inizializzazione
      if (numero >= precedente){
				    decrescente = 0;}

		  if (numero <= precedente){
				    crescente = 0;}
      }
	  precedente = numero;

	} while (continua == 1);

	if (iterazione <= 1)
	{
		crescente = 0;
		decrescente = 0;
	}

	if (crescente)
		printf("CRESCENTE\n");
	else if (decrescente)
		printf("DECRESCENTE\n");
	else
		printf("NON CRESCENTE E NON DECRESCENTE\n");

	return 0;
}
