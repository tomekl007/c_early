#include <stdio.h>
#include <conio.h>
main()
{
char a;
do
{
printf("Je�eli chcesz wy�wietli� ten komunikat jeszcze raz naci�nij y\n");
a=getch();
}while(a=='y');
puts("Koniec");
return 0;
}
