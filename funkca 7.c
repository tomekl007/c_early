#include <stdio.h>
main()
{
int funkcja();
int a;
int b;
int *wsk;
puts("Podaj dowoln� liczb�:");
scanf("%d",&b);
wsk=&b;
a=funkcja();
printf("Liczba ta podniesiona do kwadratu jest r�wna: z",a);
return 0;
}
int funkcja()
{
int *wsk;
int a;
*wsk=a*a;
return 0;
}
