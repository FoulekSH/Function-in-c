#include <unistd.h>

void my_putchar(int);
void my_putnbr(int *n)
{
   my_putnbr('&n');

}

 void my_putnbr(int n)
   {
      my_putnbr('&n');
      return 0;
   }
