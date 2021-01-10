/*
** ETNA PROJECT, 05/10/2020 by saadao_b
** c: ~\Desktop\workspace\day01s2
** File description:
**      fiboncci
*/

int my_fibonacci_rec(int nb)
{

   if (nb > 2)
   {
      return my_fibonacci_rec(nb - 1) + my_fibonacci_rec(nb - 2);
   }
     else if ( nb <= 0)
     {
      return (0);
     }

     if ( nb > 46)
     {
       return (0);
     }
 return (1);
}
