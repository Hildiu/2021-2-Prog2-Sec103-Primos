/*-------------------------------------------------
 * Dato de Entrada: num (unsigned int) num>10
 * Dato de Salida: sigPrimo, antPrimo (unsigned int)
 --------------------------------------------------*/
#include <iostream>
#include "UFunciones.h"
using namespace std;

int main()
{
  unsigned int num;

  do {
    cout << "Numero > 10 : ";
    cin >> num;
  }while(num<=10);
  cout << "El siguiente numero primo es : " << sigPrimo(num) << "\n";
  cout << "El numero primo anterior es  : " << anteriorPrimo(num) << "\n";
  cout << "Chao.";
  return 0;
}

/*
  El proyecto estaria conformado por:
  CMakeList.txt
  main.cpp
  UFunciones.h
  UFunciones.cpp
  */