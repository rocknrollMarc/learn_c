#include <stdio.h>

int main(int argc, char *argv[]) {

	int i = 0;

	// go through  each string  in argv
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	// array of strings
	char *states[] = {
		"Hamburg", "Kassel",
		"Kiel", "Pinneberg"
	};

	int num_states = 4;

	for(i = 0; i < num_states; i ++ ) {
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;

}
