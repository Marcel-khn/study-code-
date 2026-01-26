#include <stdio.h>

int main()
{
    unsigned char status = 0xA7;
    int sum;

    if ((status & 0x80) == 0x80)
    {
        printf("Es liegt ein Fehler vor.\n");
    }
    else if ((status & 0x40) == 0x40)
    {
        printf("Es liegt eine Übertemperatur vor.\n");
    }
    else if ((status & 0x20) == 0x20)
    {
        printf("Es liegt eine Unterspannung vor.\n");
    }
    
    
    sum = status & 0x0F;
    printf("Ihr Messwert beträgt: %d", sum);
    
    return 0;
}