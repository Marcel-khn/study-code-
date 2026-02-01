#include <stdio.h>

int main()
{
    int Zahl[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    char Wort[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for(int i = 7; i >= 0; i--)
    {
        for(int a = 0; a < 8; a++)
        {
            printf("%c%d ", Wort[a], Zahl[i]);
        }
        printf("\n");
    }
}