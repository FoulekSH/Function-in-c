#include <unistd.h>

void my_putchar(char);
void my_print_alpha(void) {
    for (char i = 'a'; i <= 'z'; i++) {
       my_putchar(i);
    }
    my_putchar('\n');
}
