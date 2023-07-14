#include <stdio.h>

int main(void) {

	int input[] = {155,68,2,156,91,3,0,-1,6,8,1,-2,77};

	int array_length = sizeof(input) / sizeof(input[0]);

	printf("%-16s: %d\n", "INPUT ARRAY SIZE",array_length);
	printf("%-16s: ", "UNSORTED INPUT");

	for (int i = 0; i < array_length; i++) {

		printf("%i\t", input[i]);

	}
	
	int lowest;
	int lowestPos;
	
	printf("\n%-16s: ", "SORTED INPUT");

	for (int iterator = 0; iterator < array_length; iterator++) {
		lowest = input[iterator];
		lowestPos = iterator;
		for (int i = iterator; i < array_length; i++) {
			if (lowest > input[i]) {
				lowest = input[i];
				lowestPos = i;
			}
			 
		}
		input[lowestPos] = input[iterator];
		input[iterator] = lowest;
		printf("%i\t", input[iterator]);
	}
}

