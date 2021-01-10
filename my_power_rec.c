/*
** ETNA PROJECT, 05/10/2020 by saadao_b
** ~\Desktop\workspace\dy01s2\my_power_rec
   }** File description:
**      facteur
*/

int my_power_rec(int nb, int p)
{

  if (p > 0)
   {
    return (my_power_rec(nb, p - 1) * nb);
   }
   else if (p < 0)
   {
      return (0);
   }

 return (1);
}
