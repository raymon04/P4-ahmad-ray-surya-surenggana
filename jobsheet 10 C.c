#include <stdio.h>

main (){
	printf ("nama : Ahmad Ray surya Surenggana\n");
printf ("nim : F1B019013\n ");
printf ("kelompok : 4\n");
char nama [2][10][30];
int i, j;
for (i = 0; i< 2; i++){
for (j = 1; j < 10; j++){
printf ("nama my best friend [%d][%d] = ", i, j);
scanf ("%s", &nama[i][j]);
}
}
}
