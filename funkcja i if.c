#include <stdio.h>
main()
{
int a,b;
int potega();
int *y;
int *x;

puts("Program dzi�ki utworzonej funkcji podniesie do kwadratu warto�ci podane przez u�ytkownika.");
puts("Podaj warto�� dla zmienne a:");
scanf("%d",&a);
y=&a;
puts("Podaj warto�� dla zmienne b:");
scanf("%d",&b);
x=&b;
potega();
printf("wartosc a jest rowne int x , wartosc b jest rowne int y",a,b);
return 0;
}

int potega()
{
int *y;
int *x;
int a,b;
a=(*x)*(*x);
b=(*y)*(*y);
}
