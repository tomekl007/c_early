#include <stdio.h>
main()
{
int liczba;
printf("Je�eli wpiszesz 2,4,6 albo 7 do zobaczysz odpowiedni komunikat.\n");
scanf("%d",&liczba);
switch(liczba)
{
case 2 : printf("Poda�e� 2");
break;
case 4 : printf("Poda�e� 4");
break;
case 6 : printf("Poda�e� 6");
break;
case 7 : printf("Poda�e� 7");
break;
default:
printf("Nie wpisa�e� ani 2 ani 4 ani 6 ani nawet 7");
}
return 0;
}
