/*
Scrivere un programma che dato un numero intero positivo n stampi a video
tutte le terne di numeri interi positivi a, b e c tali che:
- a^2 + b^2 = c^2
- 1 <= a , b <= n
*/

#include <stdio.h>
#include <math.h>

void stampaSeTernaPitagorica(unsigned int a, unsigned int b);

int main()
{
	int n;
	unsigned int a, b;

	do
	{
		printf("Inserisci il valore di n: ");
		scanf("%d", &n);
	} while(n < 1);

	printf("Terne pitagoriche con 1 <= a , b <= n\n");

	for(a = 1; a <= n; a++)
	{
		for(b = 1; b <= n; b++)
		{
			stampaSeTernaPitagorica(a, b);
		}
	}

	return 0;
}

void stampaSeTernaPitagorica(unsigned int a, unsigned int b)
{
	unsigned int c, c2;
	double c2_frac;

	c2 = a*a + b*b;                              //calcola quale dovrebbe essere l'ipotetico c
	c2_frac = sqrt((double) c2);                 //e controlla che questo sia effettivamente quadrato di un intero
	c = (unsigned int) c2_frac;

	if(c*c == c2) {
		printf("%u %u %u\n", a, b, c);
	}
}
