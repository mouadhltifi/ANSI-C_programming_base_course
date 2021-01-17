/*
Scrivere un programma che, dati in input due interi a e b non negativi, stampi a video tutti i numeri di Armstrong compresi tra a e b
(con a e b compresi fra 0 e 999).

NOTA: un numero di 3 cifre e' di Armstrong se la somma dei cubi delle sue cifre è uguale al numero stesso.
Esempio: 371 e' di Armstrong perché 33 =27, 73 =343, 13=1 e 27+343+1=371
*/

#include <stdio.h>

int is_armstrong(unsigned int a);
unsigned int cubo(unsigned int b);
unsigned int ordine_di_grandezza(unsigned int n);
unsigned int cifra_ennesima(unsigned int input, unsigned int n);

int main()
{
	int a, b, tmp;
	unsigned int i;

	do
	{
		printf("Inserire due numeri interi tra 0 e 999\n");
		scanf("%d%*c", &a);
		scanf("%d%*c", &b);
		if (a > b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
	} while (a < 0 || b > 999);

	for (i = a; i <= b; i++)
	{
		if (is_armstrong(i))
			printf("Il numero %u e' di Armstrong\n", i);
	}

	return 0;
}

// ritorna vero se a e' di armstrong, falso altrimenti
int is_armstrong(unsigned int a)
{
	unsigned int potenza = ordine_di_grandezza(a);
	unsigned int posto_cifra;
	unsigned int cifra;
	unsigned int somma_cubi_cifre = 0;
	for (posto_cifra = 1; posto_cifra <= potenza; posto_cifra++)
	{
		cifra = cifra_ennesima(a, posto_cifra);
		somma_cubi_cifre += cubo(cifra);
	}
	return a == somma_cubi_cifre;   //vero se è di armstrong
}

// ritorna l'esponente della piu' piccola potenza di 10 maggiore di n
unsigned int ordine_di_grandezza(unsigned int n)
{
	unsigned int risultato = 0;
	while (n != 0)
	{
		n  = n / 10;
		risultato++;
	}
	return risultato;
}

//ritorna il cubo del valore dato in ingresso
unsigned int cubo (unsigned int b)
{
	return b * b * b;
}

// ritorna il valore (compreso tra 0 e 9) della n-esima cifra del numero input
// NB: mi aspetto che n sia > 0, dove la cifra 1 sono le unita', cifra 2 sono le decine
// e cosi via
unsigned int cifra_ennesima(unsigned int input, unsigned int n)
{
	unsigned int cifra;
	unsigned int potenza10 = 1;
	unsigned int i;
	for (i = 1; i < n; i++)
	{
			potenza10 = potenza10 * 10;
	}
	// in generale voglio cifra = (a / (10 ^ (n - 1))) % 10
	cifra = (input / (potenza10)) % 10;
	return cifra;
}
