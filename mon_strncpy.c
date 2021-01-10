/*
** ETNA PROJECT, 30/09/2020 by saadao_b
** c:\Users\Bilal\Desktop\workspace\day03
** File description:
**      test
*/

char *my_strncpy(char *dest, const char *src, int n)
{
   int i;

   for(i = 0, n = 0; src[i] != '\0' && i < n; ++i, --n)
    {
        dest[i] = src[i];
    }

   dest[i] = '\0';
   return (dest);
}
