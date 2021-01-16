/*
Scrivere un programma che chieda all'utente di inserire un numero intero n non negativo
e poi stampi a video l'n-esimo elemento della successione di Fibonacci.
La successione di Fibonacci e' definita come segue:
- F(0) = 1
- F(1) = 1
- F(n) = F(n-1) + F(n-2) per ogni n >= 2
*/

#include <stdio.h>

int main()
{
	unsigned int n, i, fib, prec, precprec;
	printf("inserire un numero non negativo\n");
	scanf("%u", &n);
	if (n == 0 || n == 1)
	{
		printf("F(%u) = %u\n", n, 1);
		return 0;
	}

	prec = 1;
	precprec = 1;
	for (i = 2; i <= n; i++)
	{
		fib = prec + precprec;
		//printf("F(%u) = %u\n", i, fib);
		precprec = prec;
		prec = fib;
	}
	printf("F(%u) = %u\n", n, fib);
	return 0;
}
