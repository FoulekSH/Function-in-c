#include <unistd.h>

void my_putchar(char);
void my_print_revalpha(void) {
  for (char i = 'z'; i >= 'a'; i--) {
     my_putchar(i);
  }
}
