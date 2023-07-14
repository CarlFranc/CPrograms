#include<stdio.h>

#define TARGET 700
#define INPUT_ARRAY {20, 45, -1, 33, 79, 2, 36, 9, 7, 100}
#define LABEL_FORMAT_STR "\n%-16s: "
#define LABEL_FORMAT_INT "\n%-16s: %i"

void sort(int *input, int size);
void binarySearch(int *input, int target, int size);

int main(void) {
    int inputs[] = INPUT_ARRAY;
    int array_size = sizeof(inputs) / sizeof(inputs[0]);
    sort(inputs, array_size);
    printf(LABEL_FORMAT_INT, "SEARCH TARGET", TARGET);
    binarySearch(inputs, TARGET, array_size);
}

void sort(int *input, int size) {
    int lowest;
	int lowestPos;

    printf(LABEL_FORMAT_STR, "ORIGINAL INPUT");
	for (int i = 0; i < size; i++) {
        printf("%i\t", input[i]);
    }
    
	printf(LABEL_FORMAT_STR, "SORTED INPUT");

	for (int iterator = 0; iterator < size; iterator++) {
		lowest = input[iterator];
		lowestPos = iterator;
		for (int i = iterator; i < size; i++) {
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

void binarySearch(int *input, int target, int size) {
    
    int upper_bound = size - 1;
    int lower_bound = 0;
    int middle;
    while (lower_bound <= upper_bound) {
        middle = (upper_bound + lower_bound) / 2;
        if (input[middle] < target) {
            lower_bound = middle + 1;
        } else if (input[middle] > target) {
            upper_bound = middle - 1;
        } else if (input[middle] == target) {
            printf("\nUpper bound value: %i \nLower bound value: %i", upper_bound, lower_bound);
            printf("\nElement at: %i", middle);
            return;

        }
    }

    printf("\nValue not found!");
    
}