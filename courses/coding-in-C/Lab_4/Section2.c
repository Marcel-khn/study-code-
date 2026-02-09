#include <stdio.h>
#include <string.h>

void umwandeln(char wort[], int a);
void umformen(char wort[], int a, char wort2[]);
int pruefen(char wort[], char wort2[], int a);
int main()
{
    char wort[100];
    char wort2[100];
   
    printf("Bitte geben sie eine Wort an und es wird geprüft, ob es ein palindrome ist\n");
    fgets(wort, sizeof(wort), stdin);
    wort[strcspn(wort, "\n")] = '\0';
    

    umwandeln(wort, strlen(wort));
    umformen(wort, strlen(wort), wort2);
    pruefen(wort, wort2, strlen(wort));
}








//*****************************************************************************************************************
void umwandeln(char wort[], int a)
{
    char Buchstaben[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char buchstabe[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < a; i++)
    {
        for (int l = 0; l < 26; l++)
        {
            if (wort[i] == Buchstaben[l])
            {
                wort[i] = buchstabe[l];
            }
        }
    }

    return;
}

void umformen(char wort[], int a, char wort2[])
{
    int f;
    for (int i = 0; (a - i) > 0; i++)
    {   f = a-(i+1);
        wort2[i] = wort[f];
    }

    wort2[a] = '\0';
    return;
}

int pruefen(char wort[], char wort2[], int a)
{
    for (int i = 1; i < a; i++)
    {
        if(wort[i-1] != wort2[i-1])
        {
            printf("\nEs ist kein Pallindrome");
            break;
        }
        else if (i == (a-1))
        {
            printf("\nEs ist ein Pallindrome");
        }
    }
    return 0;
}