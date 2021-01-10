/*
** ETNA PROJECT, 30/09/2020 by saadao_b
** c:\Users\Bilal\Desktop\workspace\day02
** File description:
**      revstr
*/

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return (i);
}

char *my_revstr(char *str)
{
    int lenght = my_strlen(str) - 1;
    int pos = 0;
    char tempochar;

    if (lenght > 0) {
        while (pos != (lenght / 2)) {
            tempochar = str[pos];
            str[pos] = str[lenght - pos];
            str[lenght - pos] = tempochar;
            pos++;
        }
    }

    return (str);
}