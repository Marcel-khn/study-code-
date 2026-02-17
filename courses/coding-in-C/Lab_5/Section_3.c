#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void col(int *p1, int *p2, int l);

int main()
{
   int a = 0;
   int g = 0;
   int ary[] = {0, 1, 0, 1, 0, 1, 0, 1};
   int *p1 = ary;
   int ary2[] = {0, 0, 0, 0, 0, 0, 0, 0};
   int *p2 = ary2;
   srand(time(NULL));


   for (int i = 1; i != a; i++)
   {
      printf("Time %d:", i);
      for(int l = 0; l < 8; l++)
      {
         printf("%d ", *p1);
         p1++;
      }
      printf("\n");
      p1 = ary;

      for (int l = 0; l < 8; l++)
      {
         if (*p1 == 1)
         {

            if ((rand() % 2) == 1)
            {
               if (l == 0)
               {
                  p2 = p2 + 7;
                  p1 = p1 + 7;
                  col(p1, p2, l);
                  p2 = p2 - 7;
                  p1 = p1 - 7;
               }
               else 
               {
                  p2--; 
                  p1--;
                  col(p1, p2, l);
                  p2++;
                  p1++;
               }
            }
            else
            {
               if (l == 7)
               {
                  p2 = p2 - 7;
                  p1 = p1 -7;
                  col(p1, p2, l);
                  p2 = p2 + 7;
                  p1 = p1 + 7;
               }
               else
               {
               p2++;
               p1++;
               col(p1, p2, l);
               p2--;
               p1--;
               }
            }
            
         }
         else if (*p1 != 1) 
         {
            g++;
            if (g == 8|| i == 100)
            {
               a = i +1;
            }
         }
         p2++;
         p1++;
         
      }
      p2 = ary2;
      p1 = ary;
      g = 0;
      
      for (int h = 0; h < 8; h++)
      {
         ary[h] = ary2[h];
      }
      for (int h = 0; h < 8; h++)
      {
         ary2[h] = 0;
      }

   }
}

void col(int *p1, int *p2, int l)
{
   if (*p2 == 1) {
    *p2 = 0; 
    printf("Collision at index %d\n", l);
} else {
    *p2 = 1; 
}
}