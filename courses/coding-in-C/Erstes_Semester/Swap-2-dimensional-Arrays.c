#include <stdio.h>


int main()
{
    int Ary1[3][3] = {{2, 5, 6}, {8, 4, 3}, {1, 2, 3}};
    int Ary2[3][3] = {{4, 3, 2}, {10, 2, 21}, {4, 1, 6}};

    for(int i = 0; i < 3; i++)
    {
        for(int a = 0; a < 3; a++)
        {   
            int b = Ary1[i][a];
            Ary1[i][a] = Ary2[i][a];
            Ary2[i][a] = b;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int a = 0; a < 3; a++)
        {   
            printf("Wert von Array 1[%d][%d] = %d \n", i, a, Ary1[i][a]);
            printf("Wert von Array 2[%d][%d] = %d \n\n", i, a, Ary2[i][a]);
        }
    }

    return 0;
}