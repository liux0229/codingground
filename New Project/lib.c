#include <stdio.h>
#include <math.h>

int main;

void f() {
    printf("f() 0x%x\n", &main);
    main = 123;
}