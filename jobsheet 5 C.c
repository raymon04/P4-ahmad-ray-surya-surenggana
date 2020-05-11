#include <stdio.h>
#include <conio.h>

main (){
printf ("Nama : Ahmad Ray Surya Surenggana\n");
printf ("Nim : F1B019013\n ");
printf ("Kelompok : 4\n\n");

int nim1 [2][2];
int nim2 [2][2];
int hasil [2][2];
int i, j;
printf ("PERKALIAN MATRIX\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan NIM pertama %d, %d = ", i, j);
scanf ("%d", &nim1[i][j]);
}
}
printf ("\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan NIM kedua %d, %d = ", i, j);
scanf ("%d", &nim2[i][j]);
}
}
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
hasil [i][j]=nim1[i][0]*nim2[0][j]+nim1[i][1]*nim2[1][j];
printf ("%d ", hasil[i][j]);
}
printf ("\n");
}
getch();
}
