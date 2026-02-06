#include <stdio.h>
void Add(float x, float y);
void Sub(float x, float y);
void Multi(float x, float y);
void Div(float x, float y);
void Rech(char r);

float x; //Zahl eins
float y; //Zahl zwei
char r;  //Rechenoperation

int main()
{
    printf("\nWilkommen bei ihrem Persönlichen Taschenrechner. \nGeben sie Ihre erste Zahl an: ");
    scanf("%f", &x);

    printf("Super geben Sie nun ihre zweite Zahl an: ");
    scanf(" %f", &y);

    printf("Geben sie nun ihre Rechenoperation an, entweder + - * /: ");
    scanf(" %c[^\n]", &r);

    Rech(r);
    
}

void Rech(char r)
{
    if (r == '+')
    {   
        Add(x, y);
    }
    else if(r == '-')
    {
        Sub(x, y);
    }
    else if(r == '*')
    {
        Multi(x, y);
    }
    else if(r == '/')
    {
        Div(x, y);
    }
    else printf("Fehler!");
}
void Add(float x, float y)
{
    float o = x + y;
    printf ("Das Ergebnis ihrer Addition ist: %0.2f", o);
}

void Sub(float x, float y)
{
    float o = x - y;
    printf ("Das Ergebnis ihrer Subtration ist: %0.2f", o);
}

void Multi(float x, float y)
{
    float o = x * y;
    printf ("Das Ergebnis ihrer Multiplikation ist: %0.2f", o);
}

void Div(float x, float y)
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