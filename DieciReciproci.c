#include <stdio.h>

/* Programma che legge dieci interi introdotti dall'utente e ne stampa
 * il reciproco. Il programma termina se l'utente introduce il numero 0 */
int main() {
	    int numero;                        // un numero da leggere
		
		/* leggi 10 numeri */
		for(int i=1;i<=10;i++) {
			    printf("Introduci un intero, please.\n");
				scanf("%d", &numero);
				
				/* se e' diverso da 0 stampa il reciproco, altrimenti termina */
				if(numero!=0)
					     printf("%f\n", 1.0/numero);
				else {
					     printf("Chiedi troppo da me capo, addio!");
						 break;
				}
		}
}
