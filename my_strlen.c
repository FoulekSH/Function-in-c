/*
** ETNA PROJECT, 30/09/2020 by saadao_b
** c:\Users\Bilal\Desktop\workspace\day02
** File description:
**      strlen
*/

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return (i);
}