#include <unistd.h>

void my_putchar(int);
void my_print_digits(void) {

for (int i = '0'; i <= '9'; i++) {
  my_putchar(i);
}
}
