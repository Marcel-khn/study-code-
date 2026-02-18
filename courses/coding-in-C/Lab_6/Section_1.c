#include <stdio.h>


int main()
{
    FILE *datei = fopen("test.txt", "r+");
    if (datei == NULL)
    {
        printf("Error");
    }
    else 
    {
        int l = 0;
        while ((l = fgetc(datei)) != EOF)
        {
            printf("%c", l);
        }
        
        fputs("\nHallo Welt\n Hallo 2\n", datei);
        
        int c = 0;
        while ((c = fgetc(datei)) != EOF)
        {
            printf("%c", c);
        }
        
    }
    fclose(datei);
}
