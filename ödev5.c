
#include<stdio.h>




int main()
{
char nereye[100];
char kiminle[100];
char nezaman[100];
char nasýlgittiniz[100];
char neyaptiniz[100];

printf("Nereye gittiniz:");
gets(nereye);
printf("Kiminle gittiniz:");
gets(kiminle);
printf("nasýl gittiniz gittiniz:");//hocam 30 dkdýr gets komutunu aradým sonunda buldum ve yaptým
gets(nasýlgittiniz);
printf("Ne yapiniz:");
gets(neyaptiniz);
printf("Ne zaman gittiniz:");
gets(nezaman);



printf("%s %s %s %s %s",kiminle,nezaman,nereye,nasýlgittiniz,neyaptiniz);













}
