#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    char *ary[]= {"/Users/matze/Studium/Git/study-code-/courses/coding-in-C/Lab_5/Section_2.c", "hello", "world"};
    char **p1 = ary;
    for (int i = 0; i < 3; i++)
    {
        printf("Argument %d at address \"%p\" has content: %s (length: %lu) \n", i, p1, ary[i], strlen(ary[i]));
        p1++;
    }
}