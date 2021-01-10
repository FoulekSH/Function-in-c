/*
** ETNA PROJECT, 05/10/2020 by saadao_b
** ~\Desktop\workspace\dy01s2\my_power_rec
   }** File description:
**      facteur
*/

int my_factorial_rec(int nb)
{
  if (nb == 0 ) {
        return 1;
   }
   else if ( nb > 12)
   {
     return (0);
   }
   else if ( nb <= 0)
   {
      return (0);
   }

    else {
    return nb * my_factorial_rec(nb - 1);
    }
}
