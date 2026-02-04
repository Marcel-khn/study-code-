#include <stdio.h>

int main()
{
    int const Board_size = 8;
    char Wort[Board_size] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    char Belegt[3][4] = {"   ", "###", "|"};
    char Zeichen[2][4] = {"+", "---"};
    int f = Board_size;

    for(int i = 18; i >= 0; i--)
    {
        
        if (i == 18 || i == 0)
        {
            printf("     ");
            for(int a = 0; a < Board_size; a++)
            {
                printf("%c   ", Wort[a]);
            }
            printf("\n");
        }
        else if (i % 2 == 1)
        {
            printf("   ");
            for(int a = 0; a<=Board_size*2; a++)
            {
                if(a % 2 == 0 || a == 0)
                {
                    printf("%s", Zeichen[0]);
                }
                else if (a % 2 == 1)
                {
                    printf("%s", Zeichen[1]);
                }
                
            }
            printf("\n");
        }
        else if (i % 2 == 0)
        {
            
            for(int a = 0; a < 10; a++)
            {
                if (a == 0)
                {
                    printf(" %d ", f);
                }
                else if (a == 9)
                {
                    printf ("| %d", f);
                }
                else if (f % 2 == 0)
                {
                    if (a % 2 == 1)
                    {
                        printf("%s%s", Belegt[2], Belegt[0]);
                    }
                    else if (a % 2 == 0)
                    {
                        printf("%s%s", Belegt[2], Belegt[1]);
                    } 
                }
                else if (f % 2 == 1)
                {
                    if (a % 2 == 1)
                    {
                        printf("%s%s", Belegt[2], Belegt[1]);
                    }
                    else if (a % 2 == 0)
                    {
                        printf("%s%s", Belegt[2], Belegt[0]);
                    }   
                }
                
            }
            printf("\n");
            f--;
        }
        
    }
}