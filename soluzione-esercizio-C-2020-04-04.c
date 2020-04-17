/*
 * soluzione-esercizio-C-2020-04-04.c
 *
 *      Author: Daniele Franzot
 *
 scrivere un programma che legge da stdin una riga alla volta (la riga si considera terminata dal carattere \n).

 la lunghezza della riga è arbitraria, non fare ipotesi sulla massima lunghezza di riga.
 [in questo esercizio, non occorre immagazzinare l'intera riga].

 calcolare la media della lunghezza (=numero di caratteri) delle righe lette che vengono lette da stdin.

 dopo ogni riga letta, mostrare la lunghezza della riga e la media "parziale" fino a quel momento.

 il programma termina in caso di EOF su stdin.

 */

#include<stdio.h>


int main(int argc, char *argv[]) {

	unsigned int number_of_rows = 0;
	int c;
	unsigned long counter = 0;
	unsigned long total_counter = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			number_of_rows++;
			total_counter += counter;

			printf(
					"numero caratteri riga appena conclusa %lu \nmedia parziale%ld\n",
					counter, (total_counter / number_of_rows));

			counter = 0;
		} else{
			counter++;
		}
	}

	printf(" n righe %d", number_of_rows);
	printf(" numero caratteri totali %lu", counter);
	printf("la media dei caratteri per riga è %ld",
			(total_counter / number_of_rows));

}

