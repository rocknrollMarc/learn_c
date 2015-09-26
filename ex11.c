#include <stdio.h>

int main(int argc, const char *argv[])
{
	// go through each string in array
	int i = 0;

	while	(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	// string array
	char *states[] = {
		"Hamburg", "Kassel",
		"Kiel", "Prisdorf"
	};

	int num_states = 4;
	
	i = 0; // watch for this
	while(i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}
