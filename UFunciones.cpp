//
// Created by MARIA HILDA BERMEJO RIOS on 9/20/21.
//

#include "UFunciones.h"


bool esPrimo(unsigned int num)
{
  for(unsigned int divisor=2; divisor<num; divisor++)
    if (num % divisor ==0)
      return false;
  return true;
}


unsigned int sigPrimo(unsigned int num)
{//-------------------------------------
 // halla el siguiente numero primo
 unsigned int n;

 n = num+1;
 while(! esPrimo(n))
   n = n + 1;
 return n;
}


unsigned int anteriorPrimo(unsigned int num)
{unsigned  int n;

 n = num-1;
 while(! esPrimo(n))
   n = n-1;
 return n;
}