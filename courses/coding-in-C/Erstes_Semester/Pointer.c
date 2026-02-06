#include <stdio.h>

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int *p1 = myNumbers + 1;
    int *p2 = myNumbers + 4;

    printf("Adresse von Pointer 1: %p \n", p1);
    printf("Adresse von Pointer 2: %p \n", p2);
    printf("Differenz der Adressen: %p\n\n", (p2-p1));

    printf("Wert vom Array an der Stelle 2: %d\n", *p1);
    printf("Wert vom Array an der Stelle 5: %d\n", *p2);
}