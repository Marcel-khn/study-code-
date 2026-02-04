#include <stdio.h>

int main()
{
    float x; //Zahl eins
    float y; //Zahl zwei
    char r;  //Rechenoperation
    float o;


    printf("\nWilkommen bei ihrem Persönlichen Taschenrechner. \nGeben sie Ihre erste Zahl an: ");
    scanf("%f", &x);

    printf("Super geben Sie nun ihre zweite Zahl an: ");
    scanf(" %f", &y);

    printf("Geben sie nun ihre Rechenoperation an, entweder + - * /: ");
    scanf(" %c[^\n]", &r);

    switch(r)
    {
        case '+':
        o = x + y;
        printf ("Das Ergebnis ihrer Addition ist: %0.2f", o);
        break;
        case '-':
        o = x - y;
        printf ("Das Ergebnis ihrer Subtration ist: %0.2f", o);
        break;
        case '*':
        o = x * y;
        printf ("Das Ergebnis ihrer Multiplikation ist: %0.2f", o);
        break;
        case '/':
            switch ((int)y)
            {
                case 0:
                while (y == 0){
                    printf("Sie können nicht durch Null Teilen, bitte geben sie einen neuen zweiten Wert an: ");
                    scanf("%f", &y);
                }
                o = x / y;
                printf ("Das Ergebnis ihrer Division ist: %0.2f", o);
                break;
                default:
                {   
                o = x / y;
                printf ("Das Ergebnis ihrer Division ist: %0.2f", o);
                }
            }
            break;
        default:
        printf("Fehler, es wurde keine gültige Rechenoperation angegeben!");
    }
}