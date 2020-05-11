#include <stdio.h>
int main()
{
printf ("nama : Ahmad Ray surya Surenggana\n");
printf ("nim : F1B019013\n ");
printf ("kelompok : 4\n");
int i;
char nama[20]={'R','A','Y','M','O','N'};
char nama2[20]="RAYMON";

printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}
