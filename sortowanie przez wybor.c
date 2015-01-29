// Sortowanie Przez Wyb�r
//-------------------------------------------------
// (C)2005 mgr Jerzy Wa�aszek
// I Liceum Og�lnokszta�c�ce
// im. K. Brodzi�skiego
// w Tarnowie
//-------------------------------------------------

#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N = 20; // Liczebno�� zbioru.

// Program g��wny
//---------------

int main()
{
  int d[N],i,j,pmin;

  cout << " Sortowanie przez wybor\n"
          "------------------------\n"
          " (C)2005 Jerzy Walaszek\n\n"
          "Przed sortowaniem:\n\n";

// Najpierw wype�niamy tablic� d[] liczbami pseudolosowymi
// a nast�pnie wy�wietlamy jej zawarto��

  srand((unsigned)time(NULL));

  for(i = 0; i < N; i++) d[i] = rand() % 100;
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;

// Sortujemy

  for(j = 0; j < N - 1; j++)
  {
    pmin = j;
    for(i = j + 1; i < N; i++)
      if(d[i] < d[pmin]) pmin = i;
    swap(d[pmin], d[j]);
  }

// Wy�wietlamy wynik sortowania

  cout << "Po sortowaniu:\n\n";
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;
  return 0;
}
