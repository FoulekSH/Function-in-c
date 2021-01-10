#include <unistd.h>

void my_putchar(int);

void printchar(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(' ');
    my_putchar(c);
    my_putchar(d);
    if (a == '9' && b == '8' && c == '9' && d == '9')
        return;
    my_putchar(',');


}

void my_print_comb2(void)
{
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '1';

    while(a <= '9') {
        b = a + 1;
        while(b <= '8') {
            c = b + 1;
            while(c <= '9')
	         d = d +1;
 	        while(b <= 9) {
                printchar(a, b, c);
                c++;
            }
            c = '0';
            b++;
        }
        b = '0';
        a++;
    }
    c = '0'
     c++;
