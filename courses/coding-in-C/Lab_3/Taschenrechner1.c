#include <stdio.h>

int main()
{
    float x; //Zahl eins
    float y; //Zahl zwei
    char r;  //Rechenoperation


    printf("\nWilkommen bei ihrem Persönlichen Taschenrechner. \nGeben sie Ihre erste Zahl an: ");
    scanf("%f", &x);

    printf("Super geben Sie nun ihre zweite Zahl an: ");
    scanf(" %f", &y);

    printf("Geben sie nun ihre Rechenoperation an, entweder + - * /: ");
    scanf(" %c[^\n]", &r);

    if (r == '+')
    {   float o = x + y;
        printf ("Das Ergebnis ihrer Addition ist: %0.2f", o);
    }
    else if(r == '-')
    {
        float o = x - y;
        printf ("Das Ergebnis ihrer Subtration ist: %0.2f", o);
    }
    else if(r == '*')
    {
        float o = x * y;
        printf ("Das Ergebnis ihrer Multiplikation ist: %0.2f", o);
    }
    else if(r == '/')
    {
        if (y == 0)
        {
            while (y == 0){
                printf("Sie können nicht durch Null Teilen, bitte geben sie einen neuen zweiten Wert an: ");
                scanf("%f", &y);
            }
            float o = x / y;
            printf ("Das Ergebnis ihrer Division ist: %0.2f", o);
        }
        else 
        {   
            float o = x / y;
            printf ("Das Ergebnis ihrer Division ist: %0.2f", o);
        }
        
    }
    else 
    {
        printf("Fehler, es wurde keine gültige Rechenoperation angegeben!");
    }

    
    
}