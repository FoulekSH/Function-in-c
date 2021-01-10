#include <unistd.h>

void my_putchar(int);
void my_iseven(int n)
{
    (n % 2) == 0 ? my_putchar('E') : my_putchar('O');
}

