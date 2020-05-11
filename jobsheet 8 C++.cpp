#include <iostream>
using namespace std ; 

int main (){
	cout<<"Nama : Ahmad Ray Surya Surenggana\n";
	cout<<"Nim : F1B019013\n";
	cout<<"Kelompok: Kelompok 4\n\n";
	int i ;
	int matriks[13] ;
	 for (i=0 ; i<13 ;i++){
	 	cout << "Masukkan nilai ke-" << i<< " = " ;
	 	cin >> matriks[i] ;
	 }
	 cout <<endl ; 
	  for (i=0 ; i<13 ;i++){
	 	cout << "Nilai ke-" << i<< " = "<< matriks[i] <<endl ;
	 	
	 }
}
