#include <stdio.h>
#include <conio.h>

main (){
printf ("nama : Ahmad Ray surya surenggana\n");
printf ("nim : F1B019013\n ");
printf ("kelompok : 4\n");

	
int nim1 [2][2];
int nim2 [2][2];
int hasil [2][2];
int i, j;
printf ("Penjumlahan MATRIX\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan NIM 1 %d, %d = ", i, j);
scanf ("%d", &nim1[i][j]);
}
}
printf ("\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan NIM 2 %d, %d = ", i, j);
scanf ("%d", &nim2[i][j]);
}
}
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
hasil [i][j]=nim1[i][j]+nim2[i][j];
printf ("%d ", hasil[i][j]);
}
printf ("\n");
}
getch();
}
