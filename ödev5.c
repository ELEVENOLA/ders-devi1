
#include<stdio.h>




int main()
{
char nereye[100];
char kiminle[100];
char nezaman[100];
char nas�lgittiniz[100];
char neyaptiniz[100];

printf("Nereye gittiniz:");
gets(nereye);
printf("Kiminle gittiniz:");
gets(kiminle);
printf("nas�l gittiniz gittiniz:");//hocam 30 dkd�r gets komutunu arad�m sonunda buldum ve yapt�m
gets(nas�lgittiniz);
printf("Ne yapiniz:");
gets(neyaptiniz);
printf("Ne zaman gittiniz:");
gets(nezaman);



printf("%s %s %s %s %s",kiminle,nezaman,nereye,nas�lgittiniz,neyaptiniz);













}
