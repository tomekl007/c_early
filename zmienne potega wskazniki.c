#include <stdio.h>
main()
{
int a,b;
int potega(void);
puts("Program dzi�ki utworzonej funkcji podniesie do kwadratu warto�ci podane przez u�ytkownika.");
puts("Podaj warto�� dla zmienne a:");
scanf("%d",&a);
puts("Podaj warto�� dla zmienne b:");
scanf("%d",&b);
potega(&a,&b);
printf("Warto�� zmiennej a podniesiona do kwadratu %d a warto�� zmiennej b podniesiona do kwadratu jest r�wna %d",a,b);
return 0;
}
potega(int *x, int *y)
{
*x=(*x)*(*x);
*y=(*y)*(*y);
}
