#include <stdio.h>

void f();

int main()
{
    int sum = 0;
    int i;
    f();
    for (i = 0; i < 10; ++i) {
        sum += i;
    }
    printf("Hello, World %s %d %d!\n", "abc", 123, sum);
    printf("0x%x\n", &main);
    return 0;
}

