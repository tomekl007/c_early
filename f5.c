#include <stdio.h>
int main()
{
int funkcja();
int a;

puts("Podaj dowoln� liczb�:");
scanf("%d",&a);
funkcja();
printf("Pierwsza podan liczba to %d",a);
return 0;
}
int funkcja()
{
int a;
puts("Podaj drug� liczb�:");
scanf("%d",&a);
printf("Jako drug� poda�e� %d",a);
return 0;
}
