#include<stdio.h>

void printSample(char *x);

int main(void) {

    char name[] = "Carlo";
    int age = 25;
    int *p = &age;
    printf("%-12s: %20p \n","Before", name);
    printf("Pointer: %p\n", *p);    

    printSample(&name);
}

void printSample(char *x) {
    printf("%-12s: %20s \n", "You passed", x);
}