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

char *my_strcpy(char *dest, const char *src)
{
   int i = 0;

   for(i = 0; src[i] != '\0'; ++i)
    {
        dest[i] = src[i];
    }

   dest[i] = '\0';

return (dest);
}

