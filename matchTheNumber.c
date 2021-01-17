/*
Scrivere un programma che implementi il gioco “match the number”. Il gioco si compone di due giocatori.
Nella prima fase, il giocatore 1 inserisce due numeri interi non negativi p e t compresi tra 0 e 1000.
Nella seconda fase di gioco, il giocatore 2 deve cercare di ottenere il numero t (target) partendo da p in meno di 10 mosse.
Ad ogni mossa, il giocatore 2 può aggiornare il numero p eseguendo una delle seguenti operazioni:
- aggiungi 1 a p
- moltiplica p per 2
- aggiorna p con il resto della divisione di p per 31

Se il giocatore 2 riesce ad ottenere il numero t entro 10 mosse vince, altrimenti vince il giocatore 1.
*/

#include <stdio.h>

#define MOSSE 10

int leggiNumero(int min, int max);
int aggiornaNumero(int p);

int main() {
    int p, t;
    int mosse = MOSSE;
    int azione;

    printf("Turno giocatore 1\n");
    printf("Specifica il numero di partenza\n");
    p = leggiNumero(0, 1000);
    printf("Specifica il numero da raggiungere\n");
    t = leggiNumero(0, 1000);

    printf("\nTurno giocatore 2\n");
    while(p != t && mosse > 0)
    {
        printf("Mosse rimaste: %d\n", mosse);
        printf("Numero corrente: %d, numero da raggiungere %d\n", p, t);
        p = aggiornaNumero(p);
        mosse--;
    }

    if(p == t)
        printf("Vince il giocatore 2 con %d mosse rimaste.\n", mosse);
    else
        printf("Vince il giocatore 1, numero non raggiunto.\n");

    return 0;
}

int leggiNumero(int min, int max)
{
    int num;

    do
    {
        printf("Inserisci un numero tra %d e %d: ", min, max);
        scanf("%d%*c", &num);
    } while(num < min || num > max);

    return num;
}

int aggiornaNumero(int p)
{
    int azione = 0;
    do
    {
        printf("Che operazione vuoi eseguire?\n");
        printf(" 1) somma 1\n");
        printf(" 2) moltiplica per 2\n");
        printf(" 3) resto 31\n");
        scanf("%d%*c", &azione);
        switch(azione)
        {
            case 1:
                p = p + 1;
                break;
            case 2:
                p = p * 2;
                break;
            case 3:
                p = p % 31;
                break;
            default:
                printf("operazione non valida\n");
        }
    } while(azione < 1 || azione > 3);

    return p;
}
