#include <stdio.h>
main()
{
int liczba;
printf("Je�eli wpiszesz 2,4,6 albo 7 do zobaczysz odpowiedni komunikat.\n");
scanf("%d",&liczba);
if(liczba==2)
printf("Poda�e� 2");
else if(liczba==4)
printf("Poda�e� 4");
else if(liczba==6)
printf("Poda�e� 6");
else if(liczba==7)
printf("Poda�e� 7");
else
printf("Nie wpisa�e� ani 2 ani 4 ani 6 ani nawet 7");
return 0;
}
