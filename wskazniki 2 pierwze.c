#include <stdio.h>
main()
{
int a=5;
int *wsk;
int b=6;
int *wart;
wsk=&a;
printf("Zmienna a o warto�ci %d znajduje si� pod adresem o warto�ci %d",a,wsk);
wart=&b;
printf("zmienna b o wartosci %d znajduje sie pod adresem o wartosci %d.\n",b,wart);
//zmienne w pamieci jedna po drugiej
return 0;

}
