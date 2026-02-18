#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;
    int **pp = &p;
    **pp = 42;

    // TODO: complete the output statements
    printf("x = %d\n", x);
    printf("x via p = %d\n", *p);
    printf("x via pp = %d\n", **pp);

    return 0;
}


/*
    x = int
    p = int pointer 
    p* = int  
    pp = int pointer pointer 
    *pp = int pointer 
    **pp = int  

*/