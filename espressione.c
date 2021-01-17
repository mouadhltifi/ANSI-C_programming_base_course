/*
Siano date 3 formule matematiche:
P(a) = a^2 - a^3 + sin(a)
R(b) = sqrt( b^2 + 12)
S(x,y)= 13x + (x + y) / 3

Scrivere un programma che accetti due numeri n e m e calcoli il valore
dell'espressione S(P(n), R(n - m)) e lo stampi a video.
*/

#include <stdio.h>
#include <math.h>

double P(double a);
double R(double b);
double S(double x, double y);

int main()
{
	double n, m, ris;

	printf("Inserire due numeri\n");
	scanf("%lf%*c", &n);
	scanf("%lf%*c", &m);

	s = S(P(n), R(n-m));

	printf("Il valore dell'espressione e' %f\n", s);
	return 0;
}

double P(double a)
{
	double quadrato = a*a;
	double cubo = pow(a, 3);
	return quadrato - cubo + sin(a);
}

double R(double b)
{
	return sqrt(b*b + 12);
}

double  S(double x, double y)
{
	return (13*x) + ((x + y) / 3);
}
