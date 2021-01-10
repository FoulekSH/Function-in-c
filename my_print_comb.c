#include <unistd.h>

void my_putchar(int);

void printchar(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if (a == '7' && b == '8' && c == '9')
        return;
    my_putchar(',');
    my_putchar(' ');

}

void my_print_comb(void)
{
    char a = '0';
    char b = '0';
    char c = '1';

    while(a <= '7') {
        b = a + 1;
        while(b <= '8') {
            c = b + 1;
            while(c <= '9') {
                printchar(a, b, c);
                c++;
            }
            c = '0';
            b++;
        }
        b = '0';
        a++;
    }
}
