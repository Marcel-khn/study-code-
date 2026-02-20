#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Bitte geben Sie eine Zahl an: \n");
    int n;
    scanf("%d", &n);
    size_t size = sizeof(int);

    
    int* ptr1 = malloc(size);  //Allokiert den Speicher für einen Wert
    if (ptr1 == NULL)
    {
        printf("Speicherallokation fehlgeschlagen \n");
        free(ptr1);
        return 1;
    }
    *ptr1 = n;

    int* NN = calloc(n, sizeof(int));  //Allokiert den Speicher für ein Array
    if (NN == NULL)
    {
        printf("Speicherallokation fehlgeschlagen \n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        NN[i] = i*i;
    }
    int *NNN = realloc(NN, sizeof(int) * n * 2);   
    if (NNN == NULL)
    {
        printf("Speicherallokation fehlgeschlagen \n");
        free(NN);
        return 1;
    }
    for(int i = n; i < (2*n); i++)
    {
        NNN[i] = i*i;
    }
    for (int i = 0; i < n*2; i++)
    {
        printf("%d ", NNN[i]);
    }

    free(ptr1);
    free(NNN);
}