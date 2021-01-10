/*
** ETNA PROJECT, 30/09/2020 by saadao_b
** my_putstr
** File description:
** 		my_putstr
*/

void my_putchar(char c);

void my_putstr(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}