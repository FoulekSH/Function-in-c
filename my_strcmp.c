/*
** ETNA PROJECT, 30/09/2020 by saadao_b
** c:\Users\Bilal\Desktop\workspace\day03
** File description:
**      strcpy
*/

#include <unistd.h>
#include <string.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

int my_strcmp(const char *s1, const char *s2)
{
  int = 0;

   if( s1 = s2 )
   {
       i = 0;
   }

   if( s1 > s2)
   {
      i = 1;
   }

   if( s1 < s2 )
   {
       i = -1;
   }

return (i);

}

