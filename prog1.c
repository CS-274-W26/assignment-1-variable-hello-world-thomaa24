#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h> 



int main() {
	srand(time(NULL)); // seed random number generator

	// generate random number between 0 and 10 (inclusive)
	int myrand = rand() % 11;
	
	// based on generated number print a statement
	if (myrand < 5) {
		printf("Eat more beef, kick less cats \n");
	} else if (myrand < 10) {
		printf("FRODO LIVES \n");
	} else {
		printf("Larn is the best roguelike \n");
	}

	// print the random number
	printf("The random number was: %d\n", myrand);
}
